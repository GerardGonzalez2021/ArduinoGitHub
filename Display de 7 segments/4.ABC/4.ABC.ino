/***********************************************************
**                                                        **
**             Títol: Display de 7 segments               **
**                                                        **
**                                                        **
**                                                        **
**   NOM: Gerard Gonzalez Torres             Data:        **
***********************************************************/
//*********************** INCLUDE **************************

//********************** VARIABLES *************************
  const byte segA = 5;     
  const byte segB = 6;          
  const byte segC = 7;          
  const byte segD = 8;          
  const byte segE = 9;          
  const byte segF = 10;         
  const byte segG = 11;  
  int temps = 500; 
//************************ SETUP ***************************
void setup() {
 pinMode(segA, OUTPUT);   
 pinMode(segB, OUTPUT);
 pinMode(segC, OUTPUT);
 pinMode(segD, OUTPUT);
 pinMode(segE, OUTPUT);
 pinMode(segF, OUTPUT);
 pinMode(segG, OUTPUT);
}
//************************* LOOP ***************************
const byte segmentPins[7] = { seg_a,seg_b,seg_c,seg_d,seg_e,seg_f,seg_g};

const byte codis[] = { // números i lletres en format 7segments ABCDEFG
 //ABCDEFG_
  B11111100,  // Representa el 0
  B01100000,  // Representa el 1
  B11011010,  // Representa el 2
  B11110010,  // Representa el 3
  B01100110,  // Representa el 4
  B10110110,  // Representa el 5
  B00111110,  // Representa el 6
  B11100000,  // Representa el 7
  B11111110,  // Representa el 8
  B11100110,  // Representa el 9
  B11101110,  // Representa la a (10)
  B00111110,  // Representa la b (11)
  B10011100,  // Representa la c (12)
  B01111010,  // Representa la d (13)
  B10011110,  // Representa la e (14)
  B10001110,  // Representa la f (15)
  B11110110,  // Representa la g (16)
  B01101110,  // Representa la h (17)
  B00001100,  // Representa la i (18)
  B01111000,  // Representa la j (19)
  B01101110,  // Representa la k (20)
   
  B00000000,  // Representa el   (36)
};

  
    // B11110110,Representa la g 
    // B10011110,Representa la e 
    // B00001010,Representa la r
    // B11101110,Representa la a
    // B00001010,Representa la r
    // B01111010,Representa la d 

}
//*********************** FUNCTIONS ************************
