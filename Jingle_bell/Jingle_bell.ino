/***********************************************************
**                                                        **
**                          Títol:                        **
**                                                        **
**                                                        **
**                                                        **
**   NOM: Gerard Gonzalez Torres             Data:        **
***********************************************************/
//*********************** INCLUDE **************************

//********************** VARIABLES *************************
int buzzerPin = 8;
int tempo = 100;
char notes[] = "eeeeeeegcde fffffeeeeddedg";
int duration[] = {1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};
const byte led0 = 5;
const byte led1 = 6;

void playTheTone(char note, int duration) {
  char notesName[] = { 'c', 'd', 'e', 'f', 'g' };
  int tones[] = { 261, 293, 329, 349, 392 };

  for (int i = 0; i <= sizeof(tones); i++) {
    if (note == notesName[i]) {
      tone(buzzerPin, tones[i], duration);
    }
  }
}
//************************ SETUP ***************************
void setup() {
  pinMode(buzzerPin, OUTPUT);
}
//************************* LOOP ***************************
void loop() {
  for (int i = 0; i <= sizeof(notes)-1; i++) {
    if (notes[i] == ' ') {
      digitalWrite (led0, HIGH);
      digitalWrite (led1, HIGH);
      delay(20);
      delay(duration[i] * tempo);
    } else {
      digitalWrite (led0, HIGH);
      digitalWrite (led1, LOW);
      delay (50);
      digitalWrite (led0, LOW);
      digitalWrite (led1, HIGH);
      delay(20);
      playTheTone(notes[i], duration[i] * tempo);
    }
    delay((tempo*2)*duration[i]);
  }
}
//*********************** FUNCTIONS ************************
