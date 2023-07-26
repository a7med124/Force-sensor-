#include<Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C Icd(39,16,2);
int force;
int forcesensor=A0;
void setup()
{
  pinMode(forcesensor,INPUT);
  Icd.init();
  Icd.backlight();
  Icd.print("loadng force...   ");
  delay(250);
  Icd.clear();
   Icd.print("force = ");
    

}

void loop()
{
  force=analogRead(forcesensor);
  Icd.setCursor(8,0);
  Icd.print(force);

 
  
}