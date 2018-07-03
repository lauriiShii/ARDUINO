#define UMBRALLUZMAXIMA 1023
#define AMPLIFICACION 500

int pinled = 7;
int pinzumbador = 8;
int valortono;

void setup()
{
  pinMode(pinzumbador, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int niveldeluz = analogRead(0);
  int freq = niveldeluz*15;
  Serial.println(niveldeluz);
  if (niveldeluz<UMBRALLUZMAXIMA)
  {
    valortono = (AMPLIFICACION+freq)/40;
    tone(pinzumbador, valortono);
    delay(150);
  }
  else
  {
    noTone(pinzumbador);
    delay(150);
  }
}
