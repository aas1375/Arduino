int numTones = 12;
int tones[] = {262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494};
//              C    C#   D    D#   E    F    F#   G    G#   A    A#   B
//              Do        Re        Mi   Fa        Sol       La        Si
void setup(){
  for (int i = 0; i < numTones; i++)
  {
    tone(12, tones[i]);
    delay(500);
  }
  noTone(12);
  delay(1000);
}

void loop(){
  for (int i = 0; i < numTones; i++)
  {
    tone(12, tones[i]);
    delay(500);
  }
  noTone(12);
  delay(1000);
}
