#include <SoftwareSerial.h>

const int pin = 12;
const int pin2 = 13;
const int pin3 = 11;
const int pin4 = 10;
SoftwareSerial esp(7,6);

void setup() {
Serial.begin(9600);
esp.begin(9600);
pinMode(pin,OUTPUT);
pinMode(pin2,OUTPUT);
}

void loop() {
  
String line = esp.readStringUntil('\r');
Serial.print(line);
delay(10);
if(line=="ON1"){
  digitalWrite(pin, HIGH);
}
else if(line=="OFF1"){
  digitalWrite(pin, LOW);
}
else if(line=="ON0"){
  digitalWrite(pin2, HIGH);
}
else if(line=="OFF0"){
  digitalWrite(pin2,LOW);
}
else if(line=="ON2"){
  digitalWrite(pin3, HIGH);
}
else if(line=="OFF2"){
  digitalWrite(pin3,LOW);
}
else if(line=="ON3"){
  digitalWrite(pin4, HIGH);
}
else if(line=="OFF3"){
  digitalWrite(pin4,LOW);
}
}
