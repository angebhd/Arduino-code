#include "afficheurmulti.h"

void afficheurmulti :: affiche (int nombre){
  
 if (nombre == 1){ 
digitalWrite (2,LOW);
digitalWrite (3,HIGH);
digitalWrite (4,HIGH);
digitalWrite (5,LOW);
digitalWrite (6,LOW);
digitalWrite (7,LOW);
digitalWrite (8,LOW);  
};
  if (nombre == 2){ 
 digitalWrite (2,HIGH);
digitalWrite (3,HIGH);
digitalWrite (4,LOW);
digitalWrite (5,HIGH);
digitalWrite (6,HIGH);
digitalWrite (7,LOW);
digitalWrite (8,HIGH);     
  };
 if (nombre == 3){ 
digitalWrite (2,HIGH);
digitalWrite (3,HIGH);
digitalWrite (4,HIGH);
digitalWrite (5,HIGH);
digitalWrite (6,LOW);
digitalWrite (7,LOW);
digitalWrite (8,HIGH);   
   };
  if (nombre == 4 ){ 
  digitalWrite (2,LOW);
  digitalWrite (3,HIGH);
  digitalWrite (4,HIGH);
  digitalWrite (5,LOW);
  digitalWrite (6,LOW);
  digitalWrite (7,HIGH);
  digitalWrite (8,HIGH);

  };
   if (nombre == 5 ){ 
  digitalWrite (2,HIGH);
  digitalWrite (3,LOW);
  digitalWrite (4,HIGH);
  digitalWrite (5,HIGH);
  digitalWrite (6,LOW);
  digitalWrite (7,HIGH);
  digitalWrite (8,HIGH);
 
  }; 
    if (nombre == 6 ){ 
  
  digitalWrite (2,HIGH);
  digitalWrite (3,LOW);
  digitalWrite (4,HIGH);
  digitalWrite (5,HIGH);
  digitalWrite (6,HIGH);
  digitalWrite (7,HIGH);
  digitalWrite (8,HIGH);
  
  };
      if (nombre == 7 ){
  
  digitalWrite (2,HIGH);
  digitalWrite (3,HIGH);
  digitalWrite (4,HIGH);
  digitalWrite (5,LOW);
  digitalWrite (6,LOW);
  digitalWrite (7,LOW);
  digitalWrite (8,LOW);
  
    };
     if (nombre == 8 ){
  digitalWrite (2,HIGH);
  digitalWrite (3,HIGH);
  digitalWrite (4,HIGH);
  digitalWrite (5,HIGH);
  digitalWrite (6,HIGH);
  digitalWrite (7,HIGH);
  digitalWrite (8,HIGH);
  
    };
      if (nombre == 9 ){ 
  digitalWrite (2,HIGH);
  digitalWrite (3,HIGH);
  digitalWrite (4,HIGH);
  digitalWrite (5,HIGH);
  digitalWrite (6,LOW);
  digitalWrite (7,HIGH);
  digitalWrite (8,HIGH);  
  };
      if (nombre == 0 ){ 
  digitalWrite (2,HIGH);
  digitalWrite (3,HIGH);
  digitalWrite (4,HIGH);
  digitalWrite (5,HIGH);
  digitalWrite (6,HIGH);
  digitalWrite (7,HIGH);
  digitalWrite (8,LOW);
  };
}
void afficheurmulti :: selection (int digit){

  if (digit == 1){
digitalWrite (10,LOW);
digitalWrite (11,HIGH);
digitalWrite (12,HIGH);
digitalWrite (13,HIGH);
  }
    if (digit == 2){
digitalWrite (10,HIGH);
digitalWrite (11,LOW);
digitalWrite (12,HIGH);
digitalWrite (13,HIGH);
  }
    if (digit == 3){
digitalWrite (10,HIGH);
digitalWrite (11,HIGH);
digitalWrite (12,LOW);
digitalWrite (13,HIGH);
  }
  if (digit == 4){
 digitalWrite (10,HIGH);
digitalWrite (11,HIGH);
digitalWrite (12,HIGH);
digitalWrite (13,LOW); 
  }
  }
void afficheurmulti :: DP (int points){
  if (points == 1){
 digitalWrite (9,LOW);   
  }
}


void afficheurmulti :: configuration (){
pinMode (2,OUTPUT);
pinMode (3,OUTPUT);
pinMode (4,OUTPUT);
pinMode (5,OUTPUT);
pinMode (6,OUTPUT);
pinMode (7,OUTPUT);
pinMode (8,OUTPUT);
pinMode (9,OUTPUT);
pinMode (10,OUTPUT);
pinMode (11,OUTPUT);
pinMode (12,OUTPUT);
pinMode (13,OUTPUT);
}
