/******************************************************************************
 * Copyright (C) 2023 by Carlos Vidal
 *
 *****************************************************************************/
/**
 * @file set.ino
 * @brief Change the settings on the HC12
 *
 * AT commands available on the HC12 datasheet
 *
 * @author Carlos Vidal
 * @date 28/11/2023
 *
 */
#include <SoftwareSerial.h>;

SoftwareSerial HC12(8,9); // HC12(TX, RX)

void setup() {
  Serial.begin(9600);
  HC12.begin(9600);
}

void loop() {
  if (HC12.available()) {
    Serial.write(HC12.read());
  }
  if (Serial.available()) {
    HC12.write(Serial.read());
  }
}
