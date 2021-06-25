#include <IRremote.h>
IRsend irsend;

void setup(){
  Serial.begin(9600);
}

void loop(){
irCode=20DFFF00;
irsend.sendNEC(irCode,32);
sleep 2;
}
