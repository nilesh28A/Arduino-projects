void setup() {

}

void loop()
{
  for(int i=0; i<=255; i++)
  {
    analogWrite(10, i);
    delay(100);
  }

  for(int j=255; j>=0; j--)
  {
    analogWrite(10, i);
    delay(100);
  }

}
