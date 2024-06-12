# Drowsiness Detection System using ESP32 CAM

This project implements a drowsiness detection system using two ESP32 CAM modules and a Python script. The system detects when a person is drowsy and triggers an alert using a buzzer.

## Requirements

### Hardware
- ESP32 CAM (2 units)
- FTDI232 (for programming the ESP32 CAM)
- Buzzer
- Necessary wires and connectors

### Software
- Arduino IDE
- Python (Any environment that can run Python scripts, e.g., Anaconda, Python installed on your system)

## Project Stages

### 1. ESP32 CAM Video Stream

This stage sets up the ESP32 CAM to stream video.

#### Steps:
1. **Connections**: Refer to the `ESP32_image1` for wiring connections.
2. **Upload Code**: Use the Arduino IDE to upload the `ESP32_Camera.ino` to the first ESP32 CAM. Make sure to make any required changes in the program (e.g., WiFi credentials).

### 2. ESP32 Buzzer

This stage sets up the ESP32 CAM with a buzzer to sound an alert.

#### Steps:
1. **Connections**: Refer to the `ESP32_buzzer` for wiring connections with the buzzer.
2. **Upload Code**: Use the Arduino IDE to upload the `ESP32_buzzer.ino` to the second ESP32 CAM. Make sure to make any required changes in the program.

### 3. Python Script

Run the Python script to process the video stream and trigger the buzzer when drowsiness is detected.

#### Steps:
1. **Modify Script**: Update the Python script (`script.py`) with the required information (e.g., IP addresses of the ESP32 CAM modules).
2. **Run Script**: Execute the Python script in your chosen environment.

## Schematic Diagrams

Include images showing the wiring connections for both stages.

### ESP32 CAM Video Stream
![ESP32 CAM Video Stream](images/ESP32_image1.png)

### ESP32 Buzzer
![ESP32 Buzzer](images/ESP32_buzzer.png)

## Usage

1. **Power On**: Connect and power on both ESP32 CAM modules.
2. **Access Video Stream**: Access the video stream via the provided IP addresses and endpoints.
3. **Run Python Script**: Run the Python script to start detecting drowsiness and triggering the buzzer.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
