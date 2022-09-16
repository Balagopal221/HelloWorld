#include <Arduino.h>
//Balagopal Sreekumar 
//Student Number 000805669
//"StAuth10127: I Balagopal Sreekumar, 000805669 certify that this material 
//is my original work. No other person's work has been used without due 
//acknowledgement. I have not made my work available to anyone else."
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  Serial.println("\n\nHello, World!");
    Serial.println("\n\n Name Balagopal Sreekumar \nStudent Number: 000805669");
    Serial.println("\nFlash Chip ID:");
    Serial.println( ESP.getFlashChipId() );
    Serial.println("\nESP 8266 ID :");
     Serial.println( ESP.getChipId() );
     Serial.println("\n Amount of time spent running program:");
    

  
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(millis());
delay(2000);

}