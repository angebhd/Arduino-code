char Incoming_value = 0;
#include <Servo.h>
Servo servoa;
Servo servob;
Servo servoc;
Servo servod;
Servo servoe;
//Servo servof;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);  // Lampes 1 salon
  pinMode(12, OUTPUT);  // lampes 2 chambre A
  pinMode(11, OUTPUT);  /// lampes 3 chambre b
  pinMode(10, OUTPUT);  // Lampes 4  couloir
  pinMode(9, OUTPUT);   // lampe 5  toillettes
  pinMode(8, OUTPUT);   // lampe 6 cuisine
  pinMode(7, OUTPUT);   // Relais pour une prise
  //////// Pour l'exterieur crépusculaire//////
  servoa.attach(6, 100, 200);  /// Porte battante 1 salon
  servob.attach(5, 100, 200);  /// Porte battante 2 chambre pARENT
  servoc.attach(4, 100, 200);  /// Porte battante 3 CHAMBRE Enfant
  servod.attach(3, 100, 200);  /// Porte battante 4 cuisne barza
  servoe.attach(2, 100, 200);  /// Porte battante 5 cuisine couloir
 // servof.attach(5, 100, 200);  /// Porte battante 6 toilettes
}

void loop() {
  if (Serial.available() > 0) {
    Incoming_value = Serial.read();
    Serial.print(Incoming_value);
    Serial.print("\n");

    ///////////// LUMIERES-ECLAIRAGES ///////////////////
    //Salon
    if (Incoming_value == '1') { digitalWrite(13, HIGH); }
    if (Incoming_value == 'a') { digitalWrite(13, LOW); }
    // Chambre Parent
    if (Incoming_value == '2') { digitalWrite(12, HIGH); }
    if (Incoming_value == 'b') { digitalWrite(12, LOW); }
    // Chambre Enfant
    if (Incoming_value == '3') { digitalWrite(11, HIGH); }
    if (Incoming_value == 'c') { digitalWrite(11, LOW); }
    // couloir
    if (Incoming_value == '4') { digitalWrite(10, HIGH); }
    if (Incoming_value == 'd') { digitalWrite(10, LOW); }
    // toilettes
    if (Incoming_value == '5') { digitalWrite(9, HIGH); }
    if (Incoming_value == 'e') { digitalWrite(9, LOW); }
    // cuisine
    if (Incoming_value == '6') { digitalWrite(8, HIGH); }
    if (Incoming_value == 'f') { digitalWrite(8, LOW); }
    // prise
    if (Incoming_value == '7') { digitalWrite(7, HIGH); }
    if (Incoming_value == 'g') { digitalWrite(7, LOW); }

    ///////// PORTES BATTANTE /////////////////
    // porte battante 1 Salon
    if (Incoming_value == '10') {
      // ouvrir la porte
      servoa.write(90);
      delay(500);
    }
    if (Incoming_value == 'j'){
      ///fermer la porte
      servoa.write(-90);
    delay(500);
  }

  ////porte battante 2 chambre parent
  if (Incoming_value == '11') {
    // ouvrir la porte
    servob.write(90);
    delay(500);
  }
  if (Incoming_value == 'k') {
    ///fermer la porte
    servob.write(-90);
    delay(500);
  }

  // porte battante 3 chambr enfants
    if (Incoming_value == '12') {
      // ouvrir la porte
      servoc.write(90);
      delay(500);
    }
    if (Incoming_value == 'l'){
      ///fermer la porte
      servoc.write(-90);
    delay(500);
  }

  ////porte battante 4 cuisine barza
  if (Incoming_value == '13') {
    // ouvrir la porte
    servod.write(90);
    delay(500);
  }
  if (Incoming_value == 'm') {
    ///fermer la porte
    servod.write(-90);
    delay(500);
  }
  
  // porte battante 5 cuisine couloir
    if (Incoming_value == '14') {
      // ouvrir la porte
      servoe.write(90);
      delay(500);
    }
    if (Incoming_value == 'n'){
      ///fermer la porte
      servoe.write(-90);
    delay(500);
  }

  /*///porte battante 6 toilettes
  if (Incoming_value == '15') {
    // ouvrir la porte
    servof.write(90);
    delay(500);
  }
  if (Incoming_value == 'o') {
    ///fermer la porte
    servof.write(-90);
    delay(500);
  }
*/

  ////////// PORTES COULISSANTES////////////////////////////
  // Principale-entrée
  //         if  (Incoming_value=="8"){
  // ouvrir la porte
  //       }
  //      if  (Incoming_value=='h'){
  ///fermer la porte
  //     }

  // salon entrée
  //         if  (Incoming_value=="9"){
  // ouvrir la porte
  //       }
  //      if  (Incoming_value=='i'){
  ///fermer la porte
  //     }

}
}
