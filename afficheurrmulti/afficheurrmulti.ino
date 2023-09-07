#include "afficheurmulti.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define I2C_ADDR 0x20
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7
LiquidCrystal_I2C  lcd  (I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);
 
int DP = 9 ;
int unite;
int dizaine;
int centaine;
int millieme;
afficheurmulti ledrouge;
int tension ;
void setup() {
lcd.begin (16,2); 
 Serial.begin (9600);
 ledrouge.configuration ();
 lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
lcd.setBacklight(LOW);
lcd.home ();
lcd.print (0,0);
lcd.print(tension);
}
long distance ; 
void loop() {
   
  tension = analogRead(A0)*5.0*100.0/1023;
  millieme = tension / 1000;
 centaine = tension / 100;
 dizaine = (tension % 100)/10;
 unite = (tension % 100)%10;
 
  ledrouge.affiche (millieme);
 ledrouge.selection (1);
  delay (10);
 ledrouge.affiche (centaine);
 ledrouge.selection (2);
  delay (10);
   ledrouge.affiche (dizaine);
 ledrouge.selection (3);
  delay (10);
   ledrouge.affiche (unite);
 ledrouge.selection (4);
  delay (10);
Serial.println (tension);
 
} 

