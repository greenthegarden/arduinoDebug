#include "Debug.h"

#ifndef DEBUG_LEVEL
#define DEBUG_LEVEL 1
#endif

const unsigned long BAUD_RATE = 9600;

/*--------------------------------------------------------------------------------------
  setup()
  Called by the Arduino framework once, before the main loop begins
  --------------------------------------------------------------------------------------*/
void setup() {
#if DEBUG_LEVEL > 0
  Serial.begin(BAUD_RATE);

  Serial.println("DEBUG EXAMPLE");
#endif

  DEBUG_LOG(1, "LEVEL 1");  // not seen if DEBUG_LEVEL value is less than 1
  DEBUG_LOG(2, "LEVEL 2");  // not seen if DEBUG_LEVEL value is less than 2
  DEBUG_LOG(3, "LEVEL 3");  // not seen if DEBUG_LEVEL value is less than 3
}

/*--------------------------------------------------------------------------------------
  loop()
  Arduino main loop
  --------------------------------------------------------------------------------------*/
void loop() {}
