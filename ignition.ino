#include "DigiKeyboard.h"

int AV0 = 0;
int buttonState = 0; 


void setup() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  //DigiKeyboard.println(" ");
  pinMode(5, INPUT); 
}


void loop() {
 /*
 AV0 = analogRead(A0);
 if (AV0 > 1000) {
   DigiKeyboard.sendKeyStroke(KEY_E);
   //DigiKeyboard.sendKeyStroke(KEY_E, MOD_GUI_LEFT);
   DigiKeyboard.delay(1000);
   }
 */
 
 buttonState = digitalRead(5);

 if (buttonState == HIGH) {
  DigiKeyboard.sendKeyStroke(KEY_E,0,0);    //Send a C to host and keep it pushed
  //DigiKeyboard.delay(2000);                 // wait 2 seconds
  //DigiKeyboard.sendKeyStroke(0);
  } 
    else
  {
  DigiKeyboard.sendKeyStroke(0);
  }  
 
 DigiKeyboard.delay(100);
 
}

//eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee


