int ledPin = 11;
int numero;
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  numero = Serial.read();
  if(numero == '1'){
    digitalWrite(ledPin, HIGH);
  }
  else if(numero == '0'){
    digitalWrite(ledPin, LOW);
  
    }
  }