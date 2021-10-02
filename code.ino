#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7,8);
void setup(){
  lcd.begin(9600);
  lcd.print("Hello World!");
}
void loop(){
  //empty!
}
