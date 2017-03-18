int A = 8;
int B = 7;
int C = 6;
int D = 5;
int AA = 9;
int BB = 10;
int CC = 11;
int DD = 12;
#define dipSwitch 13
int dipState;
int varDelay;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(AA, OUTPUT);
  pinMode(BB, OUTPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, OUTPUT);
  //pinMode(res, INPUT);
  pinMode (dipSwitch, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  dipState = digitalRead(dipSwitch);
  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////2
  dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  if (dipState == HIGH){
    varDelay = 100000;
    }
  if (dipState == LOW) {
    varDelay = 1000;
  }
  delay(varDelay);
  //////////////////3
  dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  if (dipState == HIGH){
    varDelay = 100000;
    }
  if (dipState == LOW) {
    varDelay = 1000;
  }
  delay(varDelay);

  //////////////////4
  dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  if (dipState == HIGH){
    varDelay = 100000;
    }
  if (dipState == LOW) {
    varDelay = 1000;
  }
  delay(varDelay);

  //////////////////5
  dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);

  if (dipState == HIGH){
    varDelay = 100000;
    }
  if (dipState == LOW) {
    varDelay = 1000;
  }
  vadDelay = 1000;
  delay(varDelay);
  
  //////////////////6
  dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);

  if (dipState == HIGH){
    varDelay = 100000;
    }
  if (dipState == LOW) {
    varDelay = 1000;
  }
  delay(varDelay);

  //////////////////7
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////8
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////9
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////0
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);

  //////////////////1
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(1000);
////////////////////////////////////////////

  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////2
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////3
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////4
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////5
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////6
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////7
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////8
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////9
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////0
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  //////////////////2
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(1000);

///////////////////////////////////////////////////////////

//////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);
  

  //////////////////2
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);


  //////////////////3
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////4
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////5
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);



  //////////////////6
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);


  //////////////////7
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////8
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////9
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  
  //////////////////0
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////3
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(1000);

///////////////////////////////////////////////////////

//////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);
  //////////////////2
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);


  //////////////////3
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);


  //////////////////4
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);


  //////////////////5
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////6
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);


  //////////////////7
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////8
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////9
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////0
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////4
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(1000);

/////////////////////////////////////////

  /////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);
  
  //////////////////2
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////3
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////4
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////5
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////6
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);


  //////////////////7
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////8
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);


  //////////////////9
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////0
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////5
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(1000);

/////////////////////////////////////////

  /////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);
  
  //////////////////2
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////3
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////4
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);


  //////////////////5
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////6
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////7
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);


  //////////////////8
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////9
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);
 

  //////////////////0
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////6
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(1000);
  
/////////////////////////////////////////

  /////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);
  
  //////////////////2
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////3
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////4
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////5
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////6
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////7
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////8
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////9
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);
  
  //////////////////0
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);
  
  //////////////////7
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(1000);
/////////////////////////////////////////
  /////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);
  
  //////////////////2
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////3
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////4
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////5
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////6
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////7
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////8
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////9
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////0
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);
  
  //////////////////8
  digitalWrite(AA, HIGH);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(1000);
/////////////////////////////////////////

/////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);
  
  //////////////////2
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////3
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////4
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////5
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////6
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////7
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(1000);

  //////////////////8
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);

  //////////////////9
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(1000);
  
  //////////////////0
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(1000);
  
  //////////////////9
  digitalWrite(AA, HIGH);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(1000);
/////////////////////////////////////////
  

}
