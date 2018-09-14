#include "robomodule_due_CAN.h"
CRobomodule_due_CAN can;
int start = 0;
void setup() {
  // put your setup code here, to run once:    
}

void loop() {
  // put your main code here, to run repeatedly:
  if (start == 0)
  {
    can.initdriver(CAN_BPS_1000K, 0, 0, 4);
    delay(100);
    start++;
  }
  if(start == 1)
  {
    can.positionwheel(3000, -200000, 0, 1);
    can.positionwheel(3000, 200000, 0, 2);
    can.positionwheel(3000, -200000, 0, 3);
    can.positionwheel(3000, 200000, 0, 4);
    start++;
  }
  /*if(start==2)
  {
  can.initdriver(CAN_BPS_1000K, 0, 0, 1);
  delay(100);
  start++;
  }
  if(start==3)
  {
    can.speedwheel(300,  0, 1);
    can.speedwheel(300,  0, 2);
    can.speedwheel(300,  0, 3);
    can.speedwheel(300,  0, 4);
  } */
  
}
