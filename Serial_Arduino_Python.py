# python_serial_advanced.py
import serial
import serial.tools.list_ports
import threading
import time
import tkinter as tk
from tkinter import ttk, scrolledtext

class ArduinoCommunicator:
    def __init__(self):
        self.arduino = None
        self.is_connected = False
        self.read_thread = None
        
    def detectar_puertos(self):
        """Detectar puertos seriales disponibles"""
        puertos = serial.tools.list_ports.comports()
        return [port.device for port in puertos]
    
    def conectar(self, puerto, baudios=9600):
        """Conectar al Arduino"""
        try:
            self.arduino = serial.Serial(puerto, baudios, timeout=1)
            time.sleep(2)  # Esperar inicialización
            self.is_connected = True
            
            # Iniciar hilo para lectura continua
            self.read_thread = threading.Thread(target=self.leer_datos, daemon=True)
            self.read_thread.start()
            
            return True, "Conectado exitosamente"
            
        except Exception as e:
            return False, f"Error de conexión: {e}"
    
    def desconectar(self):
        """Desconectar del Arduino"""
        self.is_connected = False
        if self.arduino and self.arduino.is_open:
            self.arduino.close()
    
    def enviar_comando(self, comando):
        """Enviar comando al Arduino"""
        if self.is_connected and self.arduino:
            try:
                self.arduino.write(comando.encode())
                return True
            except Exception as e:
                print(f"Error enviando comando: {e}")
                return False
        return False
    
    def leer_datos(self):
        """Leer datos del Arduino en hilo separado"""
        while self.is_connected and self.arduino:
            try:
                if self.arduino.in_waiting > 0:
                    linea = self.arduino.readline().decode('utf-8').strip()
                    if linea:
                        self.mostrar_datos(linea)
            except Exception as e:
                print(f"Error leyendo datos: {e}")
                break
            time.sleep(0.1)
    
    def mostrar_datos(self, datos):
        """Método para mostrar datos (será sobreescrito)"""
        print(f"Arduino: {datos}")

class InterfazArduino(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Comunicación Python - Arduino")
        self.geometry("600x400")
        
        self.comm = ArduinoCommunicator()
        self.comm.mostrar_datos = self.mostrar_en_consola
        
        self.crear_interfaz()
    
    def crear_interfaz(self):
        # Frame de conexión
        frame_conexion = ttk.Frame(self)
        frame_conexion.pack(padx=10, pady=10, fill=tk.X)
        
        ttk.Label(frame_conexion, text="Puerto:").grid(row=0, column=0, padx=5)
        
        self.combo_puertos = ttk.Combobox(frame_conexion, width=15)
        self.combo_puertos.grid(row=0, column=1, padx=5)
        
        self.btn_refrescar = ttk.Button(frame_conexion, text="Refrescar", 
                                       command=self.refrescar_puertos)
        self.btn_refrescar.grid(row=0, column=2, padx=5)
        
        self.btn_conectar = ttk.Button(frame_conexion, text="Conectar", 
                                      command=self.toggle_conexion)
        self.btn_conectar.grid(row=0, column=3, padx=5)
        
        self.estado_conexion = ttk.Label(frame_conexion, text="Desconectado", 
                                        foreground="red")
        self.estado_conexion.grid(row=0, column=4, padx=10)
        
        # Frame de controles
        frame_controles = ttk.Frame(self)
        frame_controles.pack(padx=10, pady=10, fill=tk.X)
        
        ttk.Button(frame_controles, text="Encender LED (1)", 
                  command=lambda: self.enviar_comando('1')).pack(side=tk.LEFT, padx=5)
        
        ttk.Button(frame_controles, text="Apagar LED (0)", 
                  command=lambda: self.enviar_comando('0')).pack(side=tk.LEFT, padx=5)
        
        ttk.Button(frame_controles, text="Estado (?)", 
                  command=lambda: self.enviar_comando('?')).pack(side=tk.LEFT, padx=5)
        
        # Consola de mensajes
        frame_consola = ttk.Frame(self)
        frame_consola.pack(padx=10, pady=10, fill=tk.BOTH, expand=True)
        
        ttk.Label(frame_consola, text="Mensajes:").pack(anchor=tk.W)
        
        self.consola = scrolledtext.ScrolledText(frame_consola, height=15, width=70)
        self.consola.pack(fill=tk.BOTH, expand=True)
        self.consola.config(state=tk.DISABLED)
        
        # Refrescar puertos al iniciar
        self.refrescar_puertos()
    
    def refrescar_puertos(self):
        puertos = self.comm.detectar_puertos()
        self.combo_puertos['values'] = puertos
        if puertos:
            self.combo_puertos.set(puertos[0])
    
    def toggle_conexion(self):
        if not self.comm.is_connected:
            puerto = self.combo_puertos.get()
            if puerto:
                exito, mensaje = self.comm.conectar(puerto)
                if exito:
                    self.estado_conexion.config(text="Conectado", foreground="green")
                    self.btn_conectar.config(text="Desconectar")
                    self.mostrar_en_consola(mensaje)
                else:
                    self.mostrar_en_consola(mensaje)
        else:
            self.comm.desconectar()
            self.estado_conexion.config(text="Desconectado", foreground="red")
            self.btn_conectar.config(text="Conectar")
            self.mostrar_en_consola("Desconectado")
    
    def enviar_comando(self, comando):
        if self.comm.is_connected:
            self.comm.enviar_comando(comando)
            self.mostrar_en_consola(f"Enviado: {comando}")
        else:
            self.mostrar_en_consola("Error: No conectado al Arduino")
    
    def mostrar_en_consola(self, mensaje):
        self.consola.config(state=tk.NORMAL)
        self.consola.insert(tk.END, f"{mensaje}\n")
        self.consola.see(tk.END)
        self.consola.config(state=tk.DISABLED)
    
    def on_closing(self):
        self.comm.desconectar()
        self.destroy()

if __name__ == "__main__":
    app = InterfazArduino()
    app.protocol("WM_DELETE_WINDOW", app.on_closing)
    app.mainloop()