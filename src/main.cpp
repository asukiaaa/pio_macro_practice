#include <Arduino.h>

// #define DEBUG_PRINT
// #define DEVICE_ID "device_id_defined_in_program"

#if defined(DEBUG_PRINT) && !defined(DEVICE_ID)
#define DEVICE_ID "dummy_device_id"
#endif

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("hello");
  Serial.println(DEVICE_ID);
#ifdef DEBUG_PRINT
  Serial.println("debug print: " + String(millis()));
#endif
  delay(1000);
}
