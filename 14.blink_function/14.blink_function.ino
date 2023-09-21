#define LED1  2
#define LED2  3

void setup() {
  // put your setup code here, to run once:
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
BlinkLED(LED1, 500);
BlinkLED(LED2, 200);
}

void BlinkLED(int pin, int delay_value)
{
  digitalWrite(pin, HIGH);
  delay(delay_value);
  digitalWrite(pin, LOW);
  delay(delay_value);
}