/*
  Contador binario
  
  
  
 */
 
// Las variables led0 y led1 que tendrán los pines asociados a los LEDs
int led0 = 13;
int led1 = 12;


void setup() {                
  // Inicializamos los pines como de salida
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);     
}


void loop() {

// 0
  digitalWrite(led0, LOW);   // apaga el Led
  digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000); 
// 1
  digitalWrite(led0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000); 
// 2
  digitalWrite(led0, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000); 

// 3
  digitalWrite(led0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000); 

}
