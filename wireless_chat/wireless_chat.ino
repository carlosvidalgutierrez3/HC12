/******************************************************************************
 * Copyright (C) 2023 by Carlos Vidal
 *
 *****************************************************************************/
/**
 * @file wireless_chat.ino
 * @brief Wireless communication between Arduinos
 *
 * Connect two Arduino's (or equivalent) to your computer. Open two instances of the Arduino IDE
 * to be bale to use two different COM ports. Upload this code to you Arduinos and send 
 * messages using the Serial Monitor.
 *
 * @author Carlos Vidal
 * @date 28/11/2023
 *
 */

#include <SoftwareSerial.h>

SoftwareSerial HC12(8,9); // HC12(TX, RX)

void setup() {
  Serial.begin(9600);
  HC12.begin(9600);

}

void loop() {
  while (HC12.available()) { 
    Serial.write(HC12.read()); 
  }
  while (Serial.available()) { 
    HC12.write(Serial.read());  
  }
}
