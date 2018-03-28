#include <Arduino.h>
#line 1 "C:\\Users\\TheVeganElectrolance\\Desktop\\ArduinoVsCPP\\Src\\arduinoVSCpp\\arduinoVSCpp.ino"
#line 1 "C:\\Users\\TheVeganElectrolance\\Desktop\\ArduinoVsCPP\\Src\\arduinoVSCpp\\arduinoVSCpp.ino"
#line 1 "C:\\Users\\TheVeganElectrolance\\Desktop\\ArduinoVsCPP\\Src\\arduinoVSCpp\\arduinoVSCpp.ino"
void setup();
#line 7 "C:\\Users\\TheVeganElectrolance\\Desktop\\ArduinoVsCPP\\Src\\arduinoVSCpp\\arduinoVSCpp.ino"
void loop();
#line 1 "C:\\Users\\TheVeganElectrolance\\Desktop\\ArduinoVsCPP\\Src\\arduinoVSCpp\\arduinoVSCpp.ino"
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int x = 0; x < 100; x++)
  {
    String y = "hello you:" + x;
    Serial.println(y);
  }
}
