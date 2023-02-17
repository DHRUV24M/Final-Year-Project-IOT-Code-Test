#include <Arduino.h>
#include <ESP32Servo.h>

#define PIN_SERVO 13
#define LED_BUILTIN 2
Servo myServo;
void setup()
{
  // put your setup code here, to run once:
  myServo.attach(PIN_SERVO);
  pinMode(LED_BUILTIN,OUTPUT);

}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);
  delay(100);
  for (int pos = 0; pos <= 180; pos += 20)
  {
    myServo.write(pos);
    delay(500);
  }
  myServo.write(0);
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(500);
}