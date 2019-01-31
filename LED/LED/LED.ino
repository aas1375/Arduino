int numLED = 8;
int leds[] = {0, 1, 2, 3, 4, 5, 6, 7};
int leds2[] = {7, 6, 5, 4, 3, 2, 1, 0};
// int PWM[] = {32, 64, 96, 128, 160, 192, 224, 255};
// Becaues simulation is in Proteus, PWM pins are not detected correctly

void setup(){
  for (int i = 0; i < numLED; i++)
  {
    pinMode(A0, INPUT_PULLUP);
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], !digitalRead(A0));
//    analogWrite(leds[i], PWM[i]);
    delay(500);
    digitalWrite(leds[i], LOW);
    delay(100);
  }
  for (int i = 0; i < numLED; i++)
  {
    pinMode(A1, INPUT_PULLUP);
    pinMode(leds2[i], OUTPUT);
    digitalWrite(leds2[i], !digitalRead(A1));
//    analogWrite(leds2[i], PWM[i]);
    delay(500);
    digitalWrite(leds2[i], LOW);
    delay(100);
  } 
}
void loop(){
   for (int i = 0; i < numLED; i++)
  {
    pinMode(A0, INPUT_PULLUP);
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], !digitalRead(A0));
//    analogWrite(leds[i], PWM[i]);
    delay(500);
    digitalWrite(leds[i], LOW);
    delay(100);
  }
  for (int i = 0; i < numLED; i++)
  {
    pinMode(A1, INPUT_PULLUP);
    pinMode(leds2[i], OUTPUT);
    digitalWrite(leds2[i], !digitalRead(A1));
//    analogWrite(leds2[i], PWM[i]);
    delay(500);
    digitalWrite(leds2[i], LOW);
    delay(100);
  } 
}
