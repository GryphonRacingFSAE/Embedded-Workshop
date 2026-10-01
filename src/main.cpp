#include "Arduino.h"
#include "main.h"

/***************************** STATIC VARIABLE DEFINITIONS *****************************/

// this is a constant variable, it can not be changed
// the variable is referencing pin 32 which is where the sensor is connected

static constexpr uint8_t signalPin = 32;

int i = 0;


/***************************** FUNCTION DEFINITIONS *****************************/

int readVoltage(int signal) {
  // use the analog read function to read the voltage from the sensor
  int voltage = analogRead(signal);
  return voltage;
}


/**************************** ARDUINO SETUP AND LOOP ****************************/

void setup() {
  // set the signal pin as an input
  pinMode(signalPin, INPUT);
  // Serial setup
    Serial.begin(115200);
    delay(2000);
    Serial.println("Board started!");
}

void loop() {
  // call your function here to run forever
  int voltage = readVoltage(signalPin);
  Serial.print("Voltage reading: ");
  Serial.println(voltage);

  // delete this after verifying the board is working for you
  Serial.println(i);

  i++;
  delay(1000);
}

