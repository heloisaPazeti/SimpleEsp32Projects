int ValAnalogico = 0;
int EntAnalogica = 12;
float convertido = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  ValAnalogico = analogRead(EntAnalogica);
  Serial.print("Valor Analogico: ");
  Serial.print(ValAnalogico);
  convertido = ValAnalogico*(3.3/4095);
  Serial.print(", Valor convertido: ");
  Serial.println(convertido);
  delay(10);
}