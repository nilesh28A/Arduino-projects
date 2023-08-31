void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // connect gas sensor & read ADC Value 0-1023 (10bit)
int gas = analogRead(A0);
Serial.println(gas);
delay(1000);
}
