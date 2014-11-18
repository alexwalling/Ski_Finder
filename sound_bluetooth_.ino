#include "pitches.h"

const int speakerPin = 2;      // the pin that the Speaker is connected to
  byte serialA;
void setup() {
  // initialize the serial communication:
  Serial.begin(115200); //baud rate - make sure it matches that of the module you got:
  // initialize the ledPin as an output:
  pinMode(speakerPin, OUTPUT);
}

void loop() {

if (Serial.available() > 0) {serialA = Serial.read();Serial.println(serialA);}

   
      switch (serialA) {
    case 1:
      tone(speakerPin, NOTE_C4);
      break;
    case 2:
      tone(speakerPin, NOTE_G3);
      break;
    case 3:
      tone(speakerPin, NOTE_C4);
      delay(100);
      tone(speakerPin, NOTE_G3);
      delay(100);
     default:

      break;
  }

}
