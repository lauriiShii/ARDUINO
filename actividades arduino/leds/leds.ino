/*
    3 LED parpadean de forma alterna
 */
 
// declaramos las variables donde se situaran los LEDs
int led13 = 13;
int led12 = 12;
int led8 = 8;

// iniciamos pines de salida
void setup() {                
  pinMode(led13, OUTPUT);
  pinMode(led12, OUTPUT);  
  pinMode(led8, OUTPUT);    
}

// rutina de los LEDs:
void loop() {
  
// 0
  digitalWrite(led13, HIGH); // led encendido
  digitalWrite(led12, LOW);  // led apagado
  digitalWrite(led8, LOW);   // led apagado
  delay(1000);               // durante un segundo
  
//1
  digitalWrite(led13, LOW); // led apagado
  digitalWrite(led12, HIGH); // led encendido
  digitalWrite(led8, LOW);  // led apagado
  delay(1000);              // durante un segundo

//2
  digitalWrite(led13, LOW); // led apagado
  digitalWrite(led12, LOW); // led apagado
  digitalWrite(led8, HIGH); // led encendido
  delay(1000);              // durante un segundo
  
}
