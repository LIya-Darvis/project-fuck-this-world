#include <SoftwareSerial.h>

int c;
int i;

void setup() {
  Serial.begin(9600);

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  //pinMode(13, OUTPUT);

  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH);  
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}

void loop() {


/*
  for(i = 1; i<=7; i++){
    for(i = 4; i<=11; i++){
      digitalWrite(i, LOW);
      delay(500);
      digitalWrite(i, HIGH);
      }
    }

*/
  
  if(Serial.available() ){
    c = Serial.read();
  //---------------------------------//
  
    if (c == 56) {
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      }  
  //---------------------------------//
    if (c == 49) {
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);  // 1 
      }
    if (c == 50) {
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);  // 2
      digitalWrite(11, HIGH);
      }
    if (c == 51) {
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);   // 3
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      }
    if (c == 52) {
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);   // 4
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      }
    if (c == 53) {
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);   // 5
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      }
    if (c == 54) {
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);   // 6
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      }
    if (c == 55) {
      digitalWrite(5, LOW);    // 7
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      }
      Serial.println(c, DEC);
    
  }
  //delay(10);
  c = 0;

  // Serial.println(c, DEC);

/*
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(100);
*/

/*
  digitalWrite(8, false);
  delay(3000);
  digitalWrite(8, true);
  delay(5000);
*/

/*
    digitalWrite(9, false);
    delay(1000);
    digitalWrite(9, true);
    delay(1000);
  */
  
  //digitalWrite(9, false);
  //delay(1000);
  //digitalWrite(9, true);
  //delay(5000);


   /*
  for (int i = 1; i <=8; i++){        // счетчик для количества светодиодов
    for (int i = 4; i <= 11; i++){     // счетчик для портов
    digitalWrite(i, LOW);
    delay(2000);
    digitalWrite(i, HIGH);
    }
  }
  */
}
