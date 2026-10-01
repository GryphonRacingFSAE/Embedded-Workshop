#include "Arduino.h"
#include "main.h"

/***************************** STATIC VARIABLE DEFINITIONS *****************************/

// this is a constant variable, it can not be changed
// the variable is referencing pin 2 which is where the sensor is connected
static constexpr uint8_t signalPin = 2;
int i = 0;


/***************************** FUNCTION DEFINITIONS *****************************/

int readVoltage(int signal) {
  // use the analog read function to read the voltage from the sensor
 
  return 0;
}


/**************************** ARDUINO SETUP AND LOOP ****************************/

void setup() {
  // set the signal pin as an input
  // pinMode(fill this);

  // Serial setup
    Serial.begin(115200);
    delay(2000);
    Serial.println("Board started!");
}

void loop() {
  // call your function here to run forever

  // delete this after verifying the board is working for you
  Serial.println(i);

  i++;
  delay(1000);
}

