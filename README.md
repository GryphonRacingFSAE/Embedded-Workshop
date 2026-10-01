# GRC 27 Embedded Workshop - Reading From a Linear Potentiometer  

## Goals
- Learn how to use Github 
- Read Sensor Data sheets
- Write firmware to read from the data sheet
- Connect MCU and Sensor to a bench supply and validate sensor functionality + code

## Vscode/PlatformIO setup Guide  

1. Install **Visual Studio Code**.  
2. Install the **PlatformIO IDE** extension in VS Code.  
3. Open **PowerShell** and run the following command (replace `C:\your path\` with your actual path):  

   ```powershell
   "& C:\your path\.platformio\penv\Scripts\python.exe -m pip install intelhex"

4. Install the USB driver to flash code to the MCU: [Silicon Labs USB-to-UART Bridge VCP Drivers](https://www.silabs.com/software-and-tools/usb-to-uart-bridge-vcp-drivers?tab=downloads)

5. Restart VS Code after the extension has been installed.

6. Open the PlatformIO extension (alien-looking symbol on the left sidebar).

7. "Pick a folder" and open the Embedded-Workshop folder.

8. At this point, all errors should disappear.

9. Build the base project from the bottom-left taskbar by clicking the check mark button.

10. Upload the code from the same taskbar using the arrow button.


## Process
For this workshop, we ar using a [Haltech Linear Position Sensor](https://www.haltech.com/product/ht-011202-linear-position-sensor-1-2-100mm-travel/?srsltid=AU7gw4UoUfLH2t41MPvZZFVqGcfdfBlySE4XlK_3fEs53IzMp4TX_9tY)
All linear potentiometers are **analog** sensors, These sensors output a voltage depending on how much the potentiometer is open or closed

1. Clone the github project
2. Create a branch your-name/27-workshop
3. Update the code to read an analog signal and print it to the serial monitor
4. Build and upload the code to the ESP
5. Connect the potentiometer to the ESP and the bench supply
6. Open a serial monitor and read the values from the potentiometer
7. Commit all changes and push to your branch 