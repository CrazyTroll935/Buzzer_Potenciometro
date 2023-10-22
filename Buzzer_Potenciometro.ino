//buzzer activo es el negro y el pasivo es el verde
int potVal;                    //Le digo que esto es un número?
int buzzer = 8;                //pin del buzzer
int potPin = A3;               //pin del potenciometro

void setup() {
Serial.begin(9600);
pinMode(buzzer,OUTPUT);
pinMode(potPin,INPUT);

}

void loop() {
potVal=analogRead(potPin);              //Le digo que potVal sea los valores del potenciometro
Serial.println(potVal);                 //Muestra los valores del potenciometro en la serial
while (potVal>1000){
  digitalWrite(buzzer, HIGH);
  potVal=analogRead(potPin);              //
}
digitalWrite(buzzer, LOW);
}

