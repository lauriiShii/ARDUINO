
int ledR = 3;
int ledB = 5;
int ledG = 6;
int Pin_echo = 13;
int Pin_trig =12;

int valorR;
int valorG;
int valorB;

void setup()
{
  Serial.begin(9600);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);

  pinMode(Pin_trig, OUTPUT);
  pinMode(Pin_echo, INPUT);
  pinMode(11, OUTPUT);
  digitalWrite(11, HIGH);
}
void loop()
{
  int pulso, cm;
  digitalWrite(Pin_trig, LOW);
  delay(2);
  digitalWrite(Pin_trig, HIGH);
  delay(10);
  digitalWrite(Pin_trig, LOW);
  
  
  pulso = pulseIn(Pin_echo, HIGH);
  cm = pulso / 290/ 2;
  Serial.print("Distancia:");
  Serial.print(cm);
  Serial.println(" cm");

  if ((cm>=5)&&(cm<=10)){
    valorR = 255;
    valorB = 0;
    valorG = 0;

    analogWrite(ledR, valorR);
    analogWrite(ledG, valorG);
    analogWrite(ledB, valorB);
    delay(100);
  }
  if ((cm>=10)&&(cm<=15)){
    valorR = 0;
    valorB = 255;
    valorG = 0;

    analogWrite(ledR, valorR);
    analogWrite(ledG, valorG);
    analogWrite(ledB, valorB);
    delay(100);
  }
  if (cm>=15){
    valorR = 0;
    valorB = 0;
    valorG = 255;

    analogWrite(ledR, valorR);
    analogWrite(ledG, valorG);
    analogWrite(ledB, valorB);
    delay(100);
  }


}

