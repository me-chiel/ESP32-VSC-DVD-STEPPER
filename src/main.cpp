#include <Arduino.h>

int dirPin = 5;
int stepperPin = 2;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(dirPin, OUTPUT);
  pinMode(stepperPin, OUTPUT);
}

//send commands to stepper driver with Direction and number of steps.
//delay isn't the best way to pause, but it works in this example
void step(boolean dir, int steps)
{
  digitalWrite(dirPin, dir);
  Serial.print("Step direction is ");
  Serial.println(dir);
  delay(50);
  for (int i = 0; i < steps; i++)
  {
    digitalWrite(stepperPin, HIGH);
    delayMicroseconds(400);
    digitalWrite(stepperPin, LOW);
    delayMicroseconds(100);
  }
}

void loop()
{
  // put your main code here, to run repeatedly:
  step(true, 2500);
  delay(500);
  step(false, 2500);
  delay(500);
  step(true, 250);
  delay(250);
  step(false, 200);
  delay(250);
  step(true, 100);
  delay(50);
  step(false, 50);
  delay(50);
  
}