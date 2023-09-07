/*Groupe 2
      * BUHENDWA ASIFIWE
      * AMANI KAMBUMBU
      * JOSUE HANGI
      * KASEREKA YVES
   

   c'est code permet de compte apartir de zero jusqu'a 9999 
*/  

// Déclaration des bornes sur lesquelles seront branches les segments 

#define A  2 
#define B  3 
#define C  4 
#define D  5 
#define E  6 
#define F  7 
#define G  8 

// Déclarons les bornes des digits

#define K4  9
#define K3  10 
#define K2  11 
#define K1  12 

/*ennoncons les fonctions qui seront utilisees plutard dans le code */
void set_7_segment_digit(int a, int b, int c, int d, int e, int f, int g);
void ecrire_chiffre(int chiffre);// Pour écrire un chiffre de 0 à 9
void ecrire_nombre(int nombre); // Pour écrire un nombre compris entre 0 et 9999

uint8_t nombre = 0 ; //precisons par combien commence le comptage on peut commence par n'importe quel nombre c'est trouvans dans l'interavalle 9999<= nombre =>0
int time = 1000 ; //precisons maintenant quel delai de temps faudra t'il pour passer d'un nombre a l'autre²²²

void setup() {
  
// parametrons les bronchees des segments en sortie 

pinMode(A, OUTPUT);
pinMode(B, OUTPUT);
pinMode(C, OUTPUT);
pinMode(D, OUTPUT);
pinMode(E, OUTPUT);
pinMode(F, OUTPUT);
pinMode(G, OUTPUT);

//parametrons les bronches des digits aussi en sortie

pinMode(K1, OUTPUT);
pinMode(K2, OUTPUT);
pinMode(K3, OUTPUT);
pinMode(K4, OUTPUT);
}
void loop() {
int n = 0 ;
while(n<100){
n++ ;
ecrire_nombre(nombre);
// On ecrit le même nombre pendant quelque temps et on m'incremente
}
nombre++ ;
if( nombre==10000){
nombre = 0 ;
}
}

/*
Pour chaque chiffre de 0 jusqu'a 9 on allume les segments correspndants
Un segments est allumé si la tension appliquée est égale à 0 dans le cas
d'un afficheur 7 segments à anode communde
*/

void ecrire_chiffre(int chiffre){
switch(chiffre){
case 0 :
set_7_segment_digit(1,1,1,1,1,1,0);
break ;
case 1 :
set_7_segment_digit(0,1,1,0,0,0,0);
break ;
case 2 :
set_7_segment_digit(1,1,0,1,1,0,1);
break ;
case 3 :
set_7_segment_digit(1,1,1,1,0,0,1);
break ;
case 4 :
set_7_segment_digit(0,1,1,0,0,1,1);
break ;
case 5 :
set_7_segment_digit(1,0,1,1,0,1,1);
break ;
case 6 :
set_7_segment_digit(1,0,1,1,1,1,1);
break ;
case 7 :
set_7_segment_digit(1,1,1,0,0,0,0);
break ;
case 8 :
set_7_segment_digit(1,1,1,1,1,1,1);
break ;
case 9 :
set_7_segment_digit(1,1,1,1,0,1,1);
break ;
}
}

/*
Cette fonction permet d'affecter les différents aux 7 entrées de l'afficher 7 segments
*/

void set_7_segment_digit(int a, int b, int c, int d, int e, int f, int g ){
digitalWrite(A, a);
digitalWrite(B, b);
digitalWrite(C, c);
digitalWrite(D, d);
digitalWrite(E, e);
digitalWrite(F, f);
digitalWrite(G, g);
}
// Une fonction qui permettra de d'afficher un nombre à quatre chiffres (0-9999)
void ecrire_nombre(int nombre){
int d1 = nombre/1000;// D1 contient le chiffre des milliers
nombre = nombre%1000;// On Met de nombre de reste de la division entière par 1000
int d2 = nombre/100;// d2 Contient le chiffre des centaines
nombre = nombre%100;// On met dans nombre le reste de la division entière par cent
int d3 = nombre/10; // d3 contient le chiffre des dizaines
int d4 = nombre%10; // d4 contient le reste qui represente les unités

/*
Cette partie il faut afficher chaque chiffre l'un après l'autre .
On selectionne chaque git pendant et on fait un delay et on passe au
suivant
NB: Avant de selectionner un digit il faut désectionner le git précendant
-> Avant d'activer 1 on désactive 1
-> Avant d'activer 2 on désactive 1
-> Avant d'activer 3 on désactive 2
-> Avant d'activer 4 on désactive 3
*/

digitalWrite(K4,1); // On désactive le digit 4
digitalWrite(K1,0); // On active Le digit 1
ecrire_chiffre(d1); // On affiche d1
_delay_us(time); // la durée de l'affichage
digitalWrite(K1,1);// On désactive le digit 1
digitalWrite(K2,0); // On active le digit 2
ecrire_chiffre(d2); // On affiche d2
_delay_us(time); // la durée de l'affichage
digitalWrite(K2,1);// On désactive le digit 2
digitalWrite(K3,0); // On active le digit 3
ecrire_chiffre(d3); // On affiche d3
_delay_us(time); // la durée de l'affichage
digitalWrite(K3,1);// On désactive le digit 3
digitalWrite(K4,0); // On active le digit 4
ecrire_chiffre(d4); // On affiche d4
_delay_us(time);

}
