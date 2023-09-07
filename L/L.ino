
const byte latch_pin= 10, clock_pin= 11,data_pin= 12;
const byte leds[8]={1,2,4,8,16,32,64,128};
const byte latch_pin2= 5, clock_pin2= 6,data_pin2= 7;
int datapin =7;
int clockpin =6;
int latchpin =5;

void setup() {
   
pinMode ( latch_pin ,OUTPUT);
  pinMode (clock_pin ,OUTPUT);
   pinMode (data_pin  ,OUTPUT);
pinMode ( latchpin ,OUTPUT);
  pinMode (clockpin ,OUTPUT);
   pinMode (datapin  ,OUTPUT);
 
  // put your setup code here, to run once:

}





void loop(){ digitalWrite(latchpin,LOW); 
 shiftOut(datapin,clockpin,LSBFIRST,0b10000000);
    digitalWrite ( latchpin,HIGH);
  digitalWrite(latchpin,LOW);  //1
  delay (5);
  digitalWrite(latch_pin,LOW); 
 shiftOut(data_pin,clock_pin,LSBFIRST,0b11111100);
    digitalWrite ( latch_pin,HIGH);
     delay (1000);
     // 0
   
  
  digitalWrite(latchpin,LOW); 
 shiftOut(datapin,clockpin,LSBFIRST,0b01000000);
    digitalWrite ( latchpin,HIGH);
  digitalWrite(latchpin,LOW);  //1
  delay (5);
 digitalWrite(latch_pin,LOW); 
 shiftOut(data_pin,clock_pin,LSBFIRST,0b01100000);

    digitalWrite ( latch_pin,HIGH);
     delay (1000);
     // 1
   
     digitalWrite(latchpin,LOW); 
 shiftOut(datapin,clockpin,LSBFIRST,0b00100000);
    digitalWrite ( latchpin,HIGH);
  digitalWrite(latchpin,LOW);  //1
  delay (5);
 
   digitalWrite (latch_pin ,LOW); 
 shiftOut(data_pin,clock_pin,LSBFIRST,0b11011010);

    digitalWrite ( latch_pin,HIGH);
     delay (1000); // 2

      
      digitalWrite(latchpin,LOW); 
 shiftOut(datapin,clockpin,LSBFIRST,0b00010000);
    digitalWrite ( latchpin,HIGH);
  digitalWrite(latchpin,LOW);  //1
  delay (5);

 digitalWrite (latch_pin,LOW); 
 shiftOut(data_pin,clock_pin,LSBFIRST,0b11110010);

    digitalWrite ( latch_pin,HIGH);
     delay (1000); // 3
      digitalWrite(latchpin,LOW); 
 shiftOut(datapin,clockpin,LSBFIRST,0b00001000);
    digitalWrite ( latchpin,HIGH);
  digitalWrite(latchpin,LOW);  //1
  delay (5);

   digitalWrite (latch_pin,LOW); 
 shiftOut(data_pin,clock_pin,LSBFIRST,0b01100110);

    digitalWrite ( latch_pin,HIGH);
     delay (1000); // 4
   digitalWrite(latchpin,LOW); 
 shiftOut(datapin,clockpin,LSBFIRST,0b00000100);
    digitalWrite ( latchpin,HIGH);
  digitalWrite(latchpin,LOW);  //1
  delay (5);
     digitalWrite (latch_pin ,LOW); 
 shiftOut(data_pin,clock_pin,LSBFIRST,0b10110110);

    digitalWrite ( latch_pin,HIGH);
     delay (1000); // 5
     digitalWrite(latchpin,LOW); 
 shiftOut(datapin,clockpin,LSBFIRST,0b00000010);
    digitalWrite ( latchpin,HIGH);
  digitalWrite(latchpin,LOW);  //1
  delay (5);
      digitalWrite (latch_pin,LOW); 

      digitalWrite (latch_pin ,LOW); 
 shiftOut(data_pin,clock_pin,LSBFIRST,0b10111110);

    digitalWrite ( latch_pin,HIGH);
     delay (1000); // 6
     digitalWrite(latchpin,LOW); 
 shiftOut(datapin,clockpin,LSBFIRST,0b00000001);
    digitalWrite ( latchpin,HIGH);
  digitalWrite(latchpin,LOW);  //1
  delay (5);
     digitalWrite (latch_pin ,LOW); 
 shiftOut(data_pin,clock_pin,LSBFIRST,0b11100000);

    digitalWrite ( latch_pin,HIGH);
     delay (1000); // 7
     shiftOut(datapin,clockpin,LSBFIRST,0b01000000);
    digitalWrite ( latchpin,HIGH);
  digitalWrite(latchpin,LOW);  //1
  delay (5);
  
 digitalWrite (latch_pin,LOW); 
 shiftOut(data_pin,clock_pin,LSBFIRST,0b11111110);

    digitalWrite ( latch_pin,HIGH);
     delay (1000); // 8
     shiftOut(datapin,clockpin,LSBFIRST,0b10000000);
    digitalWrite ( latchpin,HIGH);
  digitalWrite(latchpin,LOW);  //1
  delay (5);
 
  digitalWrite (latch_pin,LOW); 
 shiftOut(data_pin,clock_pin,LSBFIRST,0b11110110);

    digitalWrite ( latch_pin,HIGH);
     delay (1000); // 9
     
} 
  // put your main code here, to run repeatedly:


