/***********************************************************
**                                                        **
**                Títol: Tipus de dades                   **
**                                                        **
**                                                        **
**                                                        **
**   NOM: Gerard Gonzalez Torres             Data:        **
***********************************************************/
//*********************** INCLUDE **************************

//********************** VARIABLES *************************
int drive_gb = 100;
long drive_mb = 0;
//************************ SETUP ***************************
void setup() {
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//************************* LOOP ***************************
void loop() {
}
//*********************** FUNCTIONS ************************
