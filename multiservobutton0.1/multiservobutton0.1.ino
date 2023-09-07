#include <Servo.h>
Servo servoa;
Servo servob;
Servo servoc;
Servo servod;
Servo servoe;

const int bpa = 7;
const int bpb = 8;
const int bpc = 9;
const int bpd = 10;
const int bpe = 11;
int statebpa = 0;
int statebpb = 0;
int statebpc = 0;
int statebpd = 0;
int statebpe = 0;

void setup() {
  servoa.attach(6, 100, 200);  /// Porte battante 1 salon
  servob.attach(5, 100, 200);  /// Porte battante 2 chambre pARENT
  servoc.attach(4, 100, 200);  /// Porte battante 3 CHAMBRE Enfant
  servod.attach(3, 100, 200);  /// Porte battante 4 cuisne barza
  servoe.attach(2, 100, 200);  /// Porte battante 5 cuisine couloir
  pinMode(bpa,INPUT);
  pinMode(bpb,INPUT);
  pinMode(bpc,INPUT);
  pinMode(bpd,INPUT);
  pinMode(bpe,INPUT);

}

void loop() {
  statebpa = digitalRead(bpa);
  statebpb = digitalRead(bpb);
  statebpc = digitalRead(bpc);
  statebpd = digitalRead(bpd);
  statebpe = digitalRead(bpe);

  if (statebpa == LOW){
    servoa.write(90);
      delay(3500);
    servoa.write(-90);
      delay(500);
    }
    
  if (statebpb == LOW){
    servob.write(90);
      delay(3500);
    servob.write(-90);
      delay(500);
    }
  if (statebpc == LOW){
    servoc.write(90);
      delay(3500);
    servoc.write(-90);
      delay(500);
    }
  if (statebpd == LOW){
    servod.write(90);
      delay(3500);
    servod.write(-90);
      delay(500);
    }
    
  if (statebpe == LOW){
    servoe.write(90);
      delay(3500);
    servoe.write(-90);
      delay(500);
    }
}
