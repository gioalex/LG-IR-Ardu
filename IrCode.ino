#include <IRremote.h>
IRsend irsend;

void setup(){
  Serial.begin(9600);
}

void loop(){
  #Code for EZ-adjust
  irCode=0x20DFFF00;
  irsend.sendNEC(irCode,32);
  sleep 2;
}
