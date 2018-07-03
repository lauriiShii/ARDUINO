/**LAMPARA RGB QUE CAMBIA DE COLOR AL MOVERSE**/

//Declaramos variables
int ledR = 6;
int ledG = 5;
int ledB = 3;
int pinSensor = 8;

// variables donde almacenamos el color actual 
int valorR;
int valorG;
int valorB;

//iniciamos las variables
void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(pinSensor, INPUT);
}

//codigo de la rutina
void loop() {
  int lecturaSensor = digitalRead(pinSensor);
  
  if (lecturaSensor == HIGH){
    valorR = random(255);
    valorG = random(255);
    valorB = random(255);
    
    analogWrite(ledR, valorR);
    analogWrite(ledG, valorG);
    analogWrite(ledB, valorB);
    
    delay(300);
   }
}
