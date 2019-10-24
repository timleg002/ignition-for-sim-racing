#include "DigiKeyboard.h"

int AV0 = 0;
int buttonState = 0; 


void setup() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  pinMode(5, INPUT); 
}


void loop() {
 buttonState = digitalRead(5);

 if (buttonState == HIGH) {
  DigiKeyboard.sendKeyStroke(KEY_E,0,0);  
  } 
    else
  {
  DigiKeyboard.sendKeyStroke(0);
  }  
 
 DigiKeyboard.delay(100);
 
}
