/*
blink.cpp - Simple example in creating your own Arduino Library
Copyright (c) op from TMM. All right reserved.

*/
 
#include <Arduino.h>
#include "breath.h"
int i=0;
Breath::Breath(int pin){
 pinMode(pin, OUTPUT);
 pinNumber = pin; 
}
 
void Breath::breath(bool value){
 if(value == true){
for(int i=0;i<=255;i+=1){
  analogWrite(3,i);
  delay(10);
}
 }else{
 for(int i=255;i>0;i-=1){
  analogWrite(3,i);
    delay(10);
}
 }
}

void Breath::breath(bool value, int blinkLength ){
 if(value == true){
 for(int i=0;i<=255;i+=1){
  analogWrite(3,i);
  delay(blinkLength);
  }
 }else{
 for(int i=255;i>0;i-=1){
  analogWrite(3,i);
    delay(blinkLength);
}
 }
}
 
void Breath::breath(bool value, int blinkLength, int blinkLoops){
 if(value == true){
  for (int a=0;i<=blinkLoops;i++){
  
  for(int i=0;i<=255;i+=1){
  analogWrite(3,i);
  delay(blinkLength);
  }
  for(int i=255;i>0;i-=1){
  analogWrite(3,i);
    delay(blinkLength);
}}
 }
 else{
 digitalWrite(pinNumber,LOW);
 }
}
