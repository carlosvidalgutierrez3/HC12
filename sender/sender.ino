/******************************************************************************
 * Copyright (C) 2023 by Carlos Vidal
 *
 *****************************************************************************/
/**
 * @file sender.ino
 * @brief code for the sender
 *
 * Send the character "x" every second.
 *
 * @author Carlos Vidal
 * @date 28/11/2023
 *
 */

#include <SoftwareSerial.h>

SoftwareSerial HC12(8,9); // HC12(TX, RX)

void setup() {
  HC12.begin(9600);
}

void loop() {
  HC12.print("x");
  delay(1000);
}
