/******************************************************************************
 * Copyright (C) 2023 by Carlos Vidal
 *
 *****************************************************************************/
/**
 * @file receiver.ino
 * @brief code for the receiver
 *
 * If the HC12 receives an "x" it will blink the LED
 *
 * @author Carlos Vidal
 * @date 28/11/2023
 *
 */

#include <SoftwareSerial.h>

SoftwareSerial HC12(8, 9); // HC12(TX, RX)

byte rxByte;
String msg = "";

void setup() {
  HC12.begin(9600);               
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

}

void loop() {

  while (HC12.available()) {   
    rxByte = HC12.read();       
    msg = char(incomingByte);   
  }

  if (msg != "") {  
    if (msg == "x"){ // packet received
      digitalWrite(LED_BUILTIN, HIGH);
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
    }    
    msg = "";
  }
}
