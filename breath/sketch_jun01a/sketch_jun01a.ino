#include <breath.h>
//pin.breath(on/off,time lengh of breath,number of loops)
Breath pin(3);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
pin.breath(ON);
delay(1000);
pin.breath(OFF);
delay(1000);
pin.breath(ON,1);
pin.breath(OFF,100);
pin.breath(ON,1,5);
}
