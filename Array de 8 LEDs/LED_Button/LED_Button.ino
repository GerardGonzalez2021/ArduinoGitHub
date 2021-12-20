/***********************************************************
**                                                        **
**                Títol: Array de 8 LEDs                  **
**                                                        **
**                                                        **
**                                                        **
**   NOM: Gerard Gonzalez Torres             Data:        **
***********************************************************/
//*********************** INCLUDE **************************

//********************** VARIABLES *************************
const byte led0 = 5;         
const byte buttonPin = 2;  
byte buttonState = 0;  
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte led1 = 6;          // donar nom al pin 6 de l’Arduino
const byte led2 = 7;          // donar nom al pin 7 de l’Arduino
const byte led3 = 8;          // donar nom al pin 8 de l’Arduino
const byte led4 = 9;          // donar nom al pin 9 de l’Arduino
const byte led5 = 10;         // donar nom al pin 10 de l’Arduino
const byte led6 = 11;         // donar nom al pin 11 de l’Arduino
const byte led7 = 12;         // donar nom al pin 12 de l’Arduino
const byte buttonPin = 2;     // donar nom al pin 2 de l’Arduino
byte buttonState = 0;         // per guardar l’estat en que és troba el button

//************************ SETUP ***************************
void setup() {
  
  pinMode(led0, OUTPUT);     
  pinMode(buttonPin, INPUT);

  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada  
}
}
//************************* LOOP ***************************
void loop() {
   buttonState = digitalRead(buttonPin);  //llegir l’estat del button i gardar-lo
  if (buttonState == 0)  //polsador premut, muntat amb Pull-up
  {
digitalWrite(led0, HIGH);
        }
          else   //polsador no premut, muntat amb Pull-up
          {
digitalWrite(led0, LOW);
          }
          delay(200);  //per no estar llegint button molt ràpid

}
//*********************** FUNCTIONS ************************
