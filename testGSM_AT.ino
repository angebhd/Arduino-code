#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX : liaison croisee i.e RX au broche 3 et TX au broche 2
#define GSM mySerial

void setup()
{
  GSM.begin(9600);
  Serial.begin(9600);
  delay(1000);

  Serial.println(F("*************** INITIALISATION ***************"));


}

void loop () {

  if (GSM.available() > 0) {
    while (GSM.available()) {
      Serial.write(GSM.read());
    }
  }

  if (Serial.available() > 0) {
    while (Serial.available()) {
      GSM.write(Serial.read());
    }
  }

}
