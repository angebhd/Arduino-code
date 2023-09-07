/*
Chenillard smiple à base du 74hc595 
Par Ir. Ange BHD 
Goma, RD Congo
Jeudi 17 juin 2021
*/
int datapin = 7;
int clockpin= 8;
int latchpin = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(latchpin, OUTPUT);
pinMode(datapin, OUTPUT);
pinMode(clockpin, OUTPUT);
}
void loop() {
  //Impulsion 1
  digitalWrite(latchpin, LOW);
  digitalWrite(datapin, HIGH);

  digitalWrite(clockpin, HIGH);
   delay(100);
  digitalWrite(latchpin, HIGH);
delay(1000);
  digitalWrite(clockpin, LOW);
  delay(100);
  digitalWrite(latchpin, LOW);

  
//Impulsion 2
  digitalWrite(datapin, LOW);

  digitalWrite(clockpin, HIGH);
   delay(100);
  digitalWrite(latchpin, HIGH);
delay(1000);
  digitalWrite(clockpin, LOW);
  delay(100);
  digitalWrite(latchpin, LOW);

  
  //impulsion 3
  digitalWrite(datapin, LOW);

  digitalWrite(clockpin, HIGH);
   delay(100);
  digitalWrite(latchpin, HIGH);
delay(1000);
  digitalWrite(clockpin, LOW);
  delay(100);
  digitalWrite(latchpin, LOW);

  
  //impulsion 4
  digitalWrite(datapin, LOW);

  digitalWrite(clockpin, HIGH);
   delay(100);
  digitalWrite(latchpin, HIGH);
delay(1000);
  digitalWrite(clockpin, LOW);
  delay(100);
  digitalWrite(latchpin, LOW);

  
  //impulsion 5
  digitalWrite(datapin, LOW);

  digitalWrite(clockpin, HIGH);
   delay(100);
  digitalWrite(latchpin, HIGH);
delay(1000);
  digitalWrite(clockpin, LOW);
  delay(100);
  digitalWrite(latchpin, LOW);

  
  //impulsion 6
  digitalWrite(datapin, LOW);

  digitalWrite(clockpin, HIGH);
   delay(100);
  digitalWrite(latchpin, HIGH);
delay(1000);
  digitalWrite(clockpin, LOW);
  delay(100);
  digitalWrite(latchpin, LOW);

  
  //impulsion 7
  digitalWrite(datapin, LOW);

  digitalWrite(clockpin, HIGH);
   delay(100);
  digitalWrite(latchpin, HIGH);
delay(1000);
  digitalWrite(clockpin, LOW);
  delay(100);
  digitalWrite(latchpin, LOW);

  
  //impulsion 8
  digitalWrite(datapin, LOW);

  digitalWrite(clockpin, HIGH);
   delay(100);
  digitalWrite(latchpin, HIGH);
delay(1000);
  digitalWrite(clockpin, LOW);
  delay(100);
  digitalWrite(latchpin, LOW);
  
  
  // put your main code here, to run repeatedly:

}
