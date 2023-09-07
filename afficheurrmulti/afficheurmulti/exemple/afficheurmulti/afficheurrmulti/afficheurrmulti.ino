#include "afficheurmulti.h"
int DP = 9 ;
afficheurmulti ledrouge;
void setup() {
 ledrouge.configuration ();
}
void loop() {
 ledrouge.affiche (3);
  ledrouge.selection  (1);
  ledrouge.DP (1);
  delay (20);
  ledrouge.affiche (3);
  ledrouge.selection  (2);
  ledrouge.DP (1);
  delay (20);
   ledrouge.affiche (3);
  ledrouge.selection  (3);
  ledrouge.DP (1);
  delay (20);
  ledrouge.affiche (3);
  ledrouge.selection  (4);
  ledrouge.DP (1);
  delay (20);
}
