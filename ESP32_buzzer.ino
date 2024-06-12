import socket
import time

# MAC address of the ESP32 Bluetooth device
esp32_mac_address = 'MAC_ADDRESS'#Replace with mac address generated

def connect_to_esp32(mac_address):
    try:
        print("Connecting to ESP32...")
        port = 1
        esp32_sock = socket.socket(socket.AF_BLUETOOTH, socket.SOCK_STREAM, socket.BTPROTO_RFCOMM)
        esp32_sock.connect((mac_address, port))
        print("Connected to ESP32")
        return esp32_sock
    except Exception as e:
        print("Connection failed:", e)
        return None

def main():
    esp32_sock = connect_to_esp32(esp32_mac_address)
    if not esp32_sock:
        return

    try:
        while True:
            # Send '1' to ESP32
            esp32_sock.send(b'1')
            print("Sent '1' to ESP32")
            time.sleep(5)  # Send '1' every 5 seconds
    except KeyboardInterrupt:
        esp32_sock.close()
        print("Connection closed.")

if _name_ == "_main_":
    main()
