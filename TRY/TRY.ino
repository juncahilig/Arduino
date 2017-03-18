int A = 8;
int B = 7;
int C = 6;
int D = 5;
int AA = 9;
int BB = 10;
int CC = 11;
int DD = 12;
int AAA = 14;
int BBB = 15;
int CCC = 16;
int DDD = 17;
int AAAA = 18;
int BBBB = 19;
int CCCC = 20;
int DDDD = 21;



#define dipSwitch 13
int dipState;
int varDelay;
int var;


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
  pinMode(AAA, OUTPUT);
  pinMode(BBB, OUTPUT);
  pinMode(CCC, OUTPUT);
  pinMode(DDD, OUTPUT);
  pinMode(AAAA, OUTPUT);
  pinMode(BBBB, OUTPUT);
  pinMode(CCCC, OUTPUT);
  pinMode(DDDD, OUTPUT);
  //pinMode(res, INPUT);
  pinMode (dipSwitch, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(AAAA, LOW);
  digitalWrite(BBBB, LOW);
  digitalWrite(CCCC, LOW);
  digitalWrite(DDDD, LOW);
  delay(100);
  stopwatch:
  loop1: dipState = digitalRead(dipSwitch);
  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop1;
  }

  //////////////////2
  loop2: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop2;
  }
  
  //////////////////3
  loop3: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop3;
  }

  //////////////////4
  loop4: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop4;
  }

  //////////////////5
  loop5: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop5;
  }
  
  //////////////////6
  loop6: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop6;
  }

  //////////////////7
  loop7: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop7;
  }

  //////////////////8
  loop8: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop8;
  }

  //////////////////9
  loop9: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop9;
  }

  //////////////////0
  loop100: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);

  //////////////////1
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop100;
  }
////////////////////////////////////////////

  //////////////////1
  loop11: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop11;
  }

  //////////////////2
  loop12: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop12;
  }
  //////////////////3
  loop13: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop13;
  }

  //////////////////4
  loop14: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop14;
  }

  //////////////////5
  loop15: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop15;
  }

  //////////////////6
  loop16: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop16;
  }

  //////////////////7
  loop17: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop17;
  }

  //////////////////8
  loop18: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop18;
  }

  //////////////////9
  loop19: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop19;
  }

  //////////////////0
  loop20: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  //////////////////2
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop20;
  }

///////////////////////////////////////////////////////////

//////////////////1
loop21: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop21;
  }
  

  //////////////////2
  loop22: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop22;
  }


  //////////////////3
  
  loop23: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop23;
  }

  //////////////////4
  loop24: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop24;
  }

  //////////////////5
  loop25: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop25;
  }

  //////////////////6
  loop26: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop26;
  }


  //////////////////7
  loop27: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop27;
  }

  //////////////////8
  loop28: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop28;
  }

  //////////////////9
  loop29: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop29;
  }

  
  //////////////////0
  loop30: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////3
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop30;
  }

///////////////////////////////////////////////////////

//////////////////1
loop31: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop31;
  }
  //////////////////2
  loop32: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop32;
  }


  //////////////////3
  loop33: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop33;
  }


  //////////////////4
  loop34: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop34;
  }


  //////////////////5
  loop35: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop35;
  }

  //////////////////6
  loop36: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop36;
  }


  //////////////////7
  loop37: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop37;
  }

  //////////////////8
  loop38: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop38;
  }

  //////////////////9
  loop39: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop39;
  }

  //////////////////0
  loop40: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////4
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop40;
  }

/////////////////////////////////////////

  /////////////////1
  loop41: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop41;
  }
  
  //////////////////2
  loop42: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop42;
  }

  //////////////////3
  loop43: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop43;
  }

  //////////////////4
  loop44: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop44;
  }

  //////////////////5
  loop45: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop45;
  }

  //////////////////6
  loop46: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop46;
  }


  //////////////////7
  loop47: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop47;
  }

  //////////////////8
  loop48: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop48;
  }


  //////////////////9
  loop49: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop49;
  }

  //////////////////0
  loop50: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////5
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop50;
  }

/////////////////////////////////////////

  /////////////////1
  loop51: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop51;
  }

  
  
  //////////////////2
  loop52: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop52;
  }


  //////////////////3
  loop53: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop53;
  }


  //////////////////4
  loop54: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop54;
  }



  //////////////////5
  loop55: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop55;
  }


  //////////////////6
  loop56: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop56;
  }


  //////////////////7
  loop57: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop57;
  }



  //////////////////8
  loop58: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loop58;
  }


  //////////////////9
  loop59: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop59;
  }

  //////////////////0
  loop60: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////0
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  digitalWrite(AAA, LOW);
  digitalWrite(BBB, LOW);
  digitalWrite(CCC, LOW);
  digitalWrite(DDD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop60;
  }
/////////////////////////////////////////////////////////////////////////////1MIN
  loopA1: dipState = digitalRead(dipSwitch);
  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA1;
  }

  //////////////////2
  loopA2: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA2;
  }
  
  //////////////////3
  loopA3: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA3;
  }

  //////////////////4
  loopA4: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA4;
  }

  //////////////////5
  loopA5: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA5;
  }
  
  //////////////////6
  loopA6: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA6;
  }

  //////////////////7
  loopA7: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA7;
  }

  //////////////////8
  loopA8: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA8;
  }

  //////////////////9
  loopA9: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA9;
  }

  //////////////////0
  loopA100: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);

  //////////////////1
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA100;
  }
////////////////////////////////////////////

  //////////////////1
  loopA11: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA11;
  }

  //////////////////2
  loopA12: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA12;
  }
  //////////////////3
  loopA13: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA13;
  }

  //////////////////4
  loopA14: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA14;
  }

  //////////////////5
  loopA15: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA15;
  }

  //////////////////6
  loopA16: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA16;
  }

  //////////////////7
  loopA17: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA17;
  }

  //////////////////8
  loopA18: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA18;
  }

  //////////////////9
  loopA19: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA19;
  }

  //////////////////0
  loopA20: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  //////////////////2
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA20;
  }

///////////////////////////////////////////////////////////

//////////////////1
loopA21: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA21;
  }
  

  //////////////////2
  loopA22: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA22;
  }


  //////////////////3
  
  loopA23: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA23;
  }

  //////////////////4
  loopA24: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA24;
  }

  //////////////////5
  loopA25: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA25;
  }

  //////////////////6
  loopA26: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA26;
  }


  //////////////////7
  loopA27: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA27;
  }

  //////////////////8
  loopA28: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA28;
  }

  //////////////////9
  loopA29: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA29;
  }

  
  //////////////////0
  loopA30: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////3
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA30;
  }

///////////////////////////////////////////////////////

//////////////////1
loopA31: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA31;
  }
  //////////////////2
  loopA32: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA32;
  }


  //////////////////3
  loopA33: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA33;
  }


  //////////////////4
  loopA34: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA34;
  }


  //////////////////5
  loopA35: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA35;
  }

  //////////////////6
  loopA36: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA36;
  }


  //////////////////7
  loopA37: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA37;
  }

  //////////////////8
  loopA38: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA38;
  }

  //////////////////9
  loopA39: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA39;
  }

  //////////////////0
  loopA40: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////4
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA40;
  }

/////////////////////////////////////////

  /////////////////1
  loopA41: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA41;
  }
  
  //////////////////2
  loopA42: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA42;
  }

  //////////////////3
  loopA43: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA43;
  }

  //////////////////4
  loopA44: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA44;
  }

  //////////////////5
  loopA45: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA45;
  }

  //////////////////6
  loopA46: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA46;
  }


  //////////////////7
  loopA47: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA47;
  }

  //////////////////8
  loopA48: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA48;
  }


  //////////////////9
  loop4A9: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loop4A9;
  }

  //////////////////0
  loopA50: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////5
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA50;
  }

/////////////////////////////////////////

  /////////////////1
  loopA51: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA51;
  }

  
  
  //////////////////2
  loopA52: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA52;
  }


  //////////////////3
  loopA53: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA53;
  }


  //////////////////4
  loopA54: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA54;
  }



  //////////////////5
  loopA55: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA55;
  }


  //////////////////6
  loopA56: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA56;
  }


  //////////////////7
  loopA57: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA57;
  }



  //////////////////8
  loopA58: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA58;
  }


  //////////////////9
  loopA59: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopA59;
  }

  //////////////////0
  loopA60: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////0
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  digitalWrite(AAA, LOW);
  digitalWrite(BBB, LOW);
  digitalWrite(CCC, HIGH);
  digitalWrite(DDD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopA60;
  }

////////////////////////////////////////////////////////////////2MIN
loopB1: dipState = digitalRead(dipSwitch);
  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB1;
  }

  //////////////////2
  loopB2: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB2;
  }
  
  //////////////////3
  loopB3: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB3;
  }

  //////////////////4
  loopB4: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB4;
  }

  //////////////////5
  loopB5: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB5;
  }
  
  //////////////////6
  loopB6: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB6;
  }

  //////////////////7
  loopB7: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB7;
  }

  //////////////////8
  loopB8: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB8;
  }

  //////////////////9
  loopB9: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB9;
  }

  //////////////////0
  loopB100: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);

  //////////////////1
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB100;
  }
////////////////////////////////////////////

  //////////////////1
  loopB11: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB11;
  }

  //////////////////2
  loopB12: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB12;
  }
  //////////////////3
  loopB13: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB13;
  }

  //////////////////4
  loopB14: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB14;
  }

  //////////////////5
  loopB15: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB15;
  }

  //////////////////6
  loopB16: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB16;
  }

  //////////////////7
  loopB17: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB17;
  }

  //////////////////8
  loopB18: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB18;
  }

  //////////////////9
  loopB19: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB19;
  }

  //////////////////0
  loopB20: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  //////////////////2
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB20;
  }

///////////////////////////////////////////////////////////

//////////////////1
loopB21: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB21;
  }
  

  //////////////////2
  loopB22: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB22;
  }


  //////////////////3
  
  loopB23: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB23;
  }

  //////////////////4
  loopB24: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB24;
  }

  //////////////////5
  loopB25: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB25;
  }

  //////////////////6
  loopB26: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB26;
  }


  //////////////////7
  loopB27: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB27;
  }

  //////////////////8
  loopB28: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB28;
  }

  //////////////////9
  loopB29: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB29;
  }

  
  //////////////////0
  loopB30: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////3
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB30;
  }

///////////////////////////////////////////////////////

//////////////////1
loopB31: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB31;
  }
  //////////////////2
  loopB32: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB32;
  }


  //////////////////3
  loopB33: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB33;
  }


  //////////////////4
  loopB34: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB34;
  }


  //////////////////5
  loopB35: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB35;
  }

  //////////////////6
  loopB36: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB36;
  }


  //////////////////7
  loopB37: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB37;
  }

  //////////////////8
  loopB38: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB38;
  }

  //////////////////9
  loopB39: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB39;
  }

  //////////////////0
  loopB40: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////4
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB40;
  }

/////////////////////////////////////////

  /////////////////1
  loopB41: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB41;
  }
  
  //////////////////2
  loopB42: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB42;
  }

  //////////////////3
  loopB43: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB43;
  }

  //////////////////4
  loopB44: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB44;
  }

  //////////////////5
  loopB45: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB45;
  }

  //////////////////6
  loopB46: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB46;
  }


  //////////////////7
  loopB47: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB47;
  }

  //////////////////8
  loopB48: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB48;
  }


  //////////////////9
  loopB49: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB49;
  }

  //////////////////0
  loopB50: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////5
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB50;
  }

/////////////////////////////////////////

  /////////////////1
  loopB51: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB51;
  }

  
  
  //////////////////2
  loopB52: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB52;
  }


  //////////////////3
  loopB53: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB53;
  }


  //////////////////4
  loopB54: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB54;
  }



  //////////////////5
  loopB55: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB55;
  }


  //////////////////6
  loopB56: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB56;
  }


  //////////////////7
  loopB57: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB57;
  }



  //////////////////8
  loopB58: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopB58;
  }


  //////////////////9
  loopB59: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB59;
  }

  //////////////////0
  loopB60: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////0
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  digitalWrite(AAA, LOW);
  digitalWrite(BBB, LOW);
  digitalWrite(CCC, HIGH);
  digitalWrite(DDD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopB60;
  }

  ////////////////////////////////////////////////////////////////3MIN
loopC1: dipState = digitalRead(dipSwitch);
  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC1;
  }

  //////////////////2
  loopC2: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC2;
  }
  
  //////////////////3
  loopC3: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC3;
  }

  //////////////////4
  loopC4: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC4;
  }

  //////////////////5
  loopC5: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC5;
  }
  
  //////////////////6
  loopC6: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC6;
  }

  //////////////////7
  loopC7: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC7;
  }

  //////////////////8
  loopC8: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC8;
  }

  //////////////////9
  loopC9: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC9;
  }

  //////////////////0
  loopC100: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);

  //////////////////1
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC100;
  }
////////////////////////////////////////////

  //////////////////1
  loopC11: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC11;
  }

  //////////////////2
  loopC12: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC12;
  }
  //////////////////3
  loopC13: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC13;
  }

  //////////////////4
  loopC14: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC14;
  }

  //////////////////5
  loopC15: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC15;
  }

  //////////////////6
  loopC16: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC16;
  }

  //////////////////7
  loopC17: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC17;
  }

  //////////////////8
  loopC18: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC18;
  }

  //////////////////9
  loopC19: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC19;
  }

  //////////////////0
  loopC20: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  //////////////////2
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC20;
  }

///////////////////////////////////////////////////////////

//////////////////1
loopC21: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC21;
  }
  

  //////////////////2
  loopC22: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC22;
  }


  //////////////////3
  
  loopC23: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC23;
  }

  //////////////////4
  loopC24: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC24;
  }

  //////////////////5
  loopC25: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC25;
  }

  //////////////////6
  loopC26: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC26;
  }


  //////////////////7
  loopC27: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC27;
  }

  //////////////////8
  loopC28: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC28;
  }

  //////////////////9
  loopC29: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC29;
  }

  
  //////////////////0
  loopC30: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////3
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC30;
  }

///////////////////////////////////////////////////////

//////////////////1
loopC31: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC31;
  }
  //////////////////2
  loopC32: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC32;
  }


  //////////////////3
  loopC33: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC33;
  }


  //////////////////4
  loopC34: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC34;
  }


  //////////////////5
  loopC35: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC35;
  }

  //////////////////6
  loopC36: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC36;
  }


  //////////////////7
  loopC37: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC37;
  }

  //////////////////8
  loopC38: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC38;
  }

  //////////////////9
  loopC39: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC39;
  }

  //////////////////0
  loopC40: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////4
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC40;
  }

/////////////////////////////////////////

  /////////////////1
  loopC41: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC41;
  }
  
  //////////////////2
  loopC42: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC42;
  }

  //////////////////3
  loopC43: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC43;
  }

  //////////////////4
  loopC44: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC44;
  }

  //////////////////5
  loopC45: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC45;
  }

  //////////////////6
  loopC46: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC46;
  }


  //////////////////7
  loopC47: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC47;
  }

  //////////////////8
  loopC48: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC48;
  }


  //////////////////9
  loopC49: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC49;
  }

  //////////////////0
  loopC50: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////5
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC50;
  }

/////////////////////////////////////////

  /////////////////1
  loopC51: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC51;
  }

  
  
  //////////////////2
  loopC52: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC52;
  }


  //////////////////3
  loopC53: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC53;
  }


  //////////////////4
  loopC54: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC54;
  }



  //////////////////5
  loopC55: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC55;
  }


  //////////////////6
  loopC56: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC56;
  }


  //////////////////7
  loopC57: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC57;
  }



  //////////////////8
  loopC58: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC58;
  }


  //////////////////9
  loopC59: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopC59;
  }

  //////////////////0
  loopC60: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////0
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  digitalWrite(AAA, LOW);
  digitalWrite(BBB, HIGH);
  digitalWrite(CCC, LOW);
  digitalWrite(DDD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopC60;
  }

  ////////////////////////////////////////////////////////////////4MIN
loopD1: dipState = digitalRead(dipSwitch);
  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD1;
  }

  //////////////////2
  loopD2: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD2;
  }
  
  //////////////////3
  loopD3: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD3;
  }

  //////////////////4
  loopD4: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD4;
  }

  //////////////////5
  loopD5: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD5;
  }
  
  //////////////////6
  loopD6: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD6;
  }

  //////////////////7
  loopD7: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD7;
  }

  //////////////////8
  loopD8: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD8;
  }

  //////////////////9
  loopD9: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD9;
  }

  //////////////////0
  loopD100: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);

  //////////////////1
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD100;
  }
////////////////////////////////////////////

  //////////////////1
  loopD11: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD11;
  }

  //////////////////2
  loopD12: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD12;
  }
  //////////////////3
  loopD13: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD13;
  }

  //////////////////4
  loopD14: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD14;
  }

  //////////////////5
  loopD15: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD15;
  }

  //////////////////6
  loopD16: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD16;
  }

  //////////////////7
  loopD17: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD17;
  }

  //////////////////8
  loopD18: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD18;
  }

  //////////////////9
  loopD19: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD19;
  }

  //////////////////0
  loopD20: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  //////////////////2
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD20;
  }

///////////////////////////////////////////////////////////

//////////////////1
loopD21: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD21;
  }
  

  //////////////////2
  loopD22: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD22;
  }


  //////////////////3
  
  loopD23: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD23;
  }

  //////////////////4
  loopD24: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD24;
  }

  //////////////////5
  loopD25: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD25;
  }

  //////////////////6
  loopD26: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD26;
  }


  //////////////////7
  loopD27: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD27;
  }

  //////////////////8
  loopD28: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD28;
  }

  //////////////////9
  loopD29: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD29;
  }

  
  //////////////////0
  loopD30: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////3
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD30;
  }

///////////////////////////////////////////////////////

//////////////////1
loopD31: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD31;
  }
  //////////////////2
  loopD32: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD32;
  }


  //////////////////3
  loopD33: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD33;
  }


  //////////////////4
  loopD34: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD34;
  }


  //////////////////5
  loopD35: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD35;
  }

  //////////////////6
  loopD36: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD36;
  }


  //////////////////7
  loopD37: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD37;
  }

  //////////////////8
  loopD38: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD38;
  }

  //////////////////9
  loopD39: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD39;
  }

  //////////////////0
  loopD40: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////4
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD40;
  }

/////////////////////////////////////////

  /////////////////1
  loopD41: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD41;
  }
  
  //////////////////2
  loopD42: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD42;
  }

  //////////////////3
  loopD43: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD43;
  }

  //////////////////4
  loopD44: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD44;
  }

  //////////////////5
  loopD45: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD45;
  }

  //////////////////6
  loopD46: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD46;
  }


  //////////////////7
  loopD47: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD47;
  }

  //////////////////8
  loopD48: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD48;
  }


  //////////////////9
  loopD49: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD49;
  }

  //////////////////0
  loopD50: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////5
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD50;
  }

/////////////////////////////////////////

  /////////////////1
  loopD51: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD51;
  }

  
  
  //////////////////2
  loopD52: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD52;
  }


  //////////////////3
  loopD53: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD53;
  }


  //////////////////4
  loopD54: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD54;
  }



  //////////////////5
  loopD55: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD55;
  }


  //////////////////6
  loopD56: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD56;
  }


  //////////////////7
  loopD57: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD57;
  }



  //////////////////8
  loopD58: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopD58;
  }


  //////////////////9
  loopD59: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD59;
  }

  //////////////////0
  loopD60: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////0
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  digitalWrite(AAA, LOW);
  digitalWrite(BBB, HIGH);
  digitalWrite(CCC, LOW);
  digitalWrite(DDD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopD60;
  }
  ////////////////////////////////////////////////////////////////5MIN
loopE1: dipState = digitalRead(dipSwitch);
  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE1;
  }

  //////////////////2
  loopE2: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE2;
  }
  
  //////////////////3
  loopE3: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE3;
  }

  //////////////////4
  loopE4: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE4;
  }

  //////////////////5
  loopE5: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE5;
  }
  
  //////////////////6
  loopE6: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE6;
  }

  //////////////////7
  loopE7: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE7;
  }

  //////////////////8
  loopE8: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE8;
  }

  //////////////////9
  loopE9: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE9;
  }

  //////////////////0
  loopE100: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);

  //////////////////1
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE100;
  }
////////////////////////////////////////////

  //////////////////1
  loopE11: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE11;
  }

  //////////////////2
  loopE12: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE12;
  }
  //////////////////3
  loopE13: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE13;
  }

  //////////////////4
  loopE14: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE14;
  }

  //////////////////5
  loopE15: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE15;
  }

  //////////////////6
  loopE16: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE16;
  }

  //////////////////7
  loopE17: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE17;
  }

  //////////////////8
  loopE18: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE18;
  }

  //////////////////9
  loopE19: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE19;
  }

  //////////////////0
  loopE20: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  //////////////////2
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE20;
  }

///////////////////////////////////////////////////////////

//////////////////1
loopE21: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE21;
  }
  

  //////////////////2
  loopE22: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE22;
  }


  //////////////////3
  
  loopE23: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE23;
  }

  //////////////////4
  loopE24: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE24;
  }

  //////////////////5
  loopE25: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE25;
  }

  //////////////////6
  loopE26: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE26;
  }


  //////////////////7
  loopE27: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE27;
  }

  //////////////////8
  loopE28: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE28;
  }

  //////////////////9
  loopE29: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE29;
  }

  
  //////////////////0
  loopE30: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////3
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE30;
  }

///////////////////////////////////////////////////////

//////////////////1
loopE31: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE31;
  }
  //////////////////2
  loopE32: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE32;
  }


  //////////////////3
  loopE33: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE33;
  }


  //////////////////4
  loopE34: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE34;
  }


  //////////////////5
  loopE35: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE35;
  }

  //////////////////6
  loopE36: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE36;
  }


  //////////////////7
  loopE37: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE37;
  }

  //////////////////8
  loopE38: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE38;
  }

  //////////////////9
  loopE39: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE39;
  }

  //////////////////0
  loopE40: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////4
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE40;
  }

/////////////////////////////////////////

  /////////////////1
  loopE41: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE41;
  }
  
  //////////////////2
  loopE42: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE42;
  }

  //////////////////3
  loopE43: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE43;
  }

  //////////////////4
  loopE44: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE44;
  }

  //////////////////5
  loopE45: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE45;
  }

  //////////////////6
  loopE46: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE46;
  }


  //////////////////7
  loopE47: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE47;
  }

  //////////////////8
  loopE48: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE48;
  }


  //////////////////9
  loopE49: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE49;
  }

  //////////////////0
  loopE50: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////5
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE50;
  }

/////////////////////////////////////////

  /////////////////1
  loopE51: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE51;
  }

  
  
  //////////////////2
  loopE52: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE52;
  }


  //////////////////3
  loopE53: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE53;
  }


  //////////////////4
  loopE54: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE54;
  }



  //////////////////5
  loopE55: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE55;
  }


  //////////////////6
  loopE56: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE56;
  }


  //////////////////7
  loopE57: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE57;
  }



  //////////////////8
  loopE58: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE58;
  }


  //////////////////9
  loopE59: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopE59;
  }

  //////////////////0
  loopE60: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////0
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  digitalWrite(AAA, LOW);
  digitalWrite(BBB, HIGH);
  digitalWrite(CCC, HIGH);
  digitalWrite(DDD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopE60;
  }

  ////////////////////////////////////////////////////////////////6MIN
loopF1: dipState = digitalRead(dipSwitch);
  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF1;
  }

  //////////////////2
  loopF2: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF2;
  }
  
  //////////////////3
  loopF3: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF3;
  }

  //////////////////4
  loopF4: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF4;
  }

  //////////////////5
  loopF5: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF5;
  }
  
  //////////////////6
  loopF6: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF6;
  }

  //////////////////7
  loopF7: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF7;
  }

  //////////////////8
  loopF8: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF8;
  }

  //////////////////9
  loopF9: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF9;
  }

  //////////////////0
  loopF100: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);

  //////////////////1
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF100;
  }
////////////////////////////////////////////

  //////////////////1
  loopF11: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF11;
  }

  //////////////////2
  loopF12: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF12;
  }
  //////////////////3
  loopF13: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF13;
  }

  //////////////////4
  loopF14: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF14;
  }

  //////////////////5
  loopF15: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF15;
  }

  //////////////////6
  loopF16: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF16;
  }

  //////////////////7
  loopF17: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF17;
  }

  //////////////////8
  loopF18: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF18;
  }

  //////////////////9
  loopF19: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF19;
  }

  //////////////////0
  loopF20: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  //////////////////2
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF20;
  }

///////////////////////////////////////////////////////////

//////////////////1
loopF21: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF21;
  }
  

  //////////////////2
  loopF22: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF22;
  }


  //////////////////3
  
  loopF23: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF23;
  }

  //////////////////4
  loopF24: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF24;
  }

  //////////////////5
  loopF25: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF25;
  }

  //////////////////6
  loopF26: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF26;
  }


  //////////////////7
  loopF27: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF27;
  }

  //////////////////8
  loopF28: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF28;
  }

  //////////////////9
  loopF29: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF29;
  }

  
  //////////////////0
  loopF30: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////3
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF30;
  }

///////////////////////////////////////////////////////

//////////////////1
loopF31: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF31;
  }
  //////////////////2
  loopF32: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF32;
  }


  //////////////////3
  loopF33: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF33;
  }


  //////////////////4
  loopF34: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF34;
  }


  //////////////////5
  loopF35: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF35;
  }

  //////////////////6
  loopF36: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF36;
  }


  //////////////////7
  loopF37: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF37;
  }

  //////////////////8
  loopF38: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF38;
  }

  //////////////////9
  loopF39: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF39;
  }

  //////////////////0
  loopF40: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////4
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF40;
  }

/////////////////////////////////////////

  /////////////////1
  loopF41: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF41;
  }
  
  //////////////////2
  loopF42: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF42;
  }

  //////////////////3
  loopF43: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF43;
  }

  //////////////////4
  loopF44: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF44;
  }

  //////////////////5
  loopF45: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF45;
  }

  //////////////////6
  loopF46: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF46;
  }


  //////////////////7
  loopF47: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF47;
  }

  //////////////////8
  loopF48: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF48;
  }


  //////////////////9
  loopF49: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF49;
  }

  //////////////////0
  loopF50: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////5
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF50;
  }

/////////////////////////////////////////

  /////////////////1
  loopF51: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF51;
  }

  
  
  //////////////////2
  loopF52: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF52;
  }


  //////////////////3
  loopF53: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF53;
  }


  //////////////////4
  loopF54: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF54;
  }



  //////////////////5
  loopF55: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF55;
  }


  //////////////////6
  loopF56: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF56;
  }


  //////////////////7
  loopF57: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF57;
  }



  //////////////////8
  loopF58: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopF58;
  }


  //////////////////9
  loopF59: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF59;
  }

  //////////////////0
  loopF60: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////0
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  digitalWrite(AAA, LOW);
  digitalWrite(BBB, HIGH);
  digitalWrite(CCC, HIGH);
  digitalWrite(DDD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopF60;
  }

  ////////////////////////////////////////////////////////////////7MIN
loopG1: dipState = digitalRead(dipSwitch);
  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG1;
  }

  //////////////////2
  loopG2: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG2;
  }
  
  //////////////////3
  loopG3: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG3;
  }

  //////////////////4
  loopG4: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG4;
  }

  //////////////////5
  loopG5: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG5;
  }
  
  //////////////////6
  loopG6: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG6;
  }

  //////////////////7
  loopG7: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG7;
  }

  //////////////////8
  loopG8: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG8;
  }

  //////////////////9
  loopG9: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG9;
  }

  //////////////////0
  loopG100: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);

  //////////////////1
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG100;
  }
////////////////////////////////////////////

  //////////////////1
  loopG11: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG11;
  }

  //////////////////2
  loopG12: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG12;
  }
  //////////////////3
  loopG13: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG13;
  }

  //////////////////4
  loopG14: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG14;
  }

  //////////////////5
  loopG15: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG15;
  }

  //////////////////6
  loopG16: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG16;
  }

  //////////////////7
  loopG17: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG17;
  }

  //////////////////8
  loopG18: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG18;
  }

  //////////////////9
  loopG19: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG19;
  }

  //////////////////0
  loopG20: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  //////////////////2
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG20;
  }

///////////////////////////////////////////////////////////

//////////////////1
loopG21: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG21;
  }
  

  //////////////////2
  loopG22: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG22;
  }


  //////////////////3
  
  loopG23: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG23;
  }

  //////////////////4
  loopG24: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG24;
  }

  //////////////////5
  loopG25: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG25;
  }

  //////////////////6
  loopG26: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG26;
  }


  //////////////////7
  loopG27: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG27;
  }

  //////////////////8
  loopG28: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG28;
  }

  //////////////////9
  loopG29: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG29;
  }

  
  //////////////////0
  loopG30: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////3
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG30;
  }

///////////////////////////////////////////////////////

//////////////////1
loopG31: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG31;
  }
  //////////////////2
  loopG32: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG32;
  }


  //////////////////3
  loopG33: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG33;
  }


  //////////////////4
  loopG34: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG34;
  }


  //////////////////5
  loopG35: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG35;
  }

  //////////////////6
  loopG36: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG36;
  }


  //////////////////7
  loopG37: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG37;
  }

  //////////////////8
  loopG38: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG38;
  }

  //////////////////9
  loopG39: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG39;
  }

  //////////////////0
  loopG40: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////4
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG40;
  }

/////////////////////////////////////////

  /////////////////1
  loopG41: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG41;
  }
  
  //////////////////2
  loopG42: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG42;
  }

  //////////////////3
  loopG43: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG43;
  }

  //////////////////4
  loopG44: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG44;
  }

  //////////////////5
  loopG45: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG45;
  }

  //////////////////6
  loopG46: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG46;
  }


  //////////////////7
  loopG47: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG47;
  }

  //////////////////8
  loopG48: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG48;
  }


  //////////////////9
  loopG49: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG49;
  }

  //////////////////0
  loopG50: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////5
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG50;
  }

/////////////////////////////////////////

  /////////////////1
  loopG51: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG51;
  }

  
  
  //////////////////2
  loopG52: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG52;
  }


  //////////////////3
  loopG53: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG53;
  }


  //////////////////4
  loopG54: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG54;
  }



  //////////////////5
  loopG55: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG55;
  }


  //////////////////6
  loopG56: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG56;
  }


  //////////////////7
  loopG57: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG57;
  }



  //////////////////8
  loopG58: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG58;
  }


  //////////////////9
  loopG59: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopG59;
  }

  //////////////////0
  loopG60: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////0
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  digitalWrite(AAA, HIGH);
  digitalWrite(BBB, LOW);
  digitalWrite(CCC, LOW);
  digitalWrite(DDD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopG60;
  }

  ////////////////////////////////////////////////////////////////8MIN
loopH1: dipState = digitalRead(dipSwitch);
  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH1;
  }

  //////////////////2
  loopH2: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH2;
  }
  
  //////////////////3
  loopH3: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH3;
  }

  //////////////////4
  loopH4: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH4;
  }

  //////////////////5
  loopH5: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH5;
  }
  
  //////////////////6
  loopH6: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH6;
  }

  //////////////////7
  loopH7: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH7;
  }

  //////////////////8
  loopH8: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH8;
  }

  //////////////////9
  loopH9: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH9;
  }

  //////////////////0
  loopH100: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);

  //////////////////1
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH100;
  }
////////////////////////////////////////////

  //////////////////1
  loopH11: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH11;
  }

  //////////////////2
  loopH12: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH12;
  }
  //////////////////3
  loopH13: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH13;
  }

  //////////////////4
  loopH14: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH14;
  }

  //////////////////5
  loopH15: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH15;
  }

  //////////////////6
  loopH16: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH16;
  }

  //////////////////7
  loopH17: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH17;
  }

  //////////////////8
  loopH18: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH18;
  }

  //////////////////9
  loopH19: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH19;
  }

  //////////////////0
  loopH20: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  //////////////////2
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH20;
  }

///////////////////////////////////////////////////////////

//////////////////1
loopH21: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH21;
  }
  

  //////////////////2
  loopH22: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH22;
  }


  //////////////////3
  
  loopH23: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH23;
  }

  //////////////////4
  loopH24: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH24;
  }

  //////////////////5
  loopH25: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH25;
  }

  //////////////////6
  loopH26: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH26;
  }


  //////////////////7
  loopH27: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH27;
  }

  //////////////////8
  loopH28: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH28;
  }

  //////////////////9
  loopH29: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH29;
  }

  
  //////////////////0
  loopH30: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////3
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH30;
  }

///////////////////////////////////////////////////////

//////////////////1
loopH31: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH31;
  }
  //////////////////2
  loopH32: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH32;
  }


  //////////////////3
  loopH33: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH33;
  }


  //////////////////4
  loopH34: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH34;
  }


  //////////////////5
  loopH35: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH35;
  }

  //////////////////6
  loopH36: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH36;
  }


  //////////////////7
  loopH37: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH37;
  }

  //////////////////8
  loopH38: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH38;
  }

  //////////////////9
  loopH39: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH39;
  }

  //////////////////0
  loopH40: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////4
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH40;
  }

/////////////////////////////////////////

  /////////////////1
  loopH41: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH41;
  }
  
  //////////////////2
  loopH42: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH42;
  }

  //////////////////3
  loopH43: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH43;
  }

  //////////////////4
  loopH44: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH44;
  }

  //////////////////5
  loopH45: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH45;
  }

  //////////////////6
  loopH46: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH46;
  }


  //////////////////7
  loopH47: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH47;
  }

  //////////////////8
  loopH48: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH48;
  }


  //////////////////9
  loopH49: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH49;
  }

  //////////////////0
  loopH50: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////5
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH50;
  }

/////////////////////////////////////////

  /////////////////1
  loopH51: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH51;
  }

  
  
  //////////////////2
  loopH52: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH52;
  }


  //////////////////3
  loopH53: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH53;
  }


  //////////////////4
  loopH54: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH54;
  }



  //////////////////5
  loopH55: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH55;
  }


  //////////////////6
  loopH56: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH56;
  }


  //////////////////7
  loopH57: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH57;
  }



  //////////////////8
  loopH58: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopH58;
  }


  //////////////////9
  loopH59: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopH59;
  }

  //////////////////0
  loopH60: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////0
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  digitalWrite(AAA, HIGH);
  digitalWrite(BBB, LOW);
  digitalWrite(CCC, LOW);
  digitalWrite(DDD, HIGH);
  delay(100);

  if (dipState == HIGH){
    goto loopH60;
  }  

  ////////////////////////////////////////////////////////////////9MIN
  loopI1: dipState = digitalRead(dipSwitch);
  //////////////////1
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI1;
  }

  //////////////////2
  loopI2: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI2;
  }
  
  //////////////////3
  loopI3: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI3;
  }

  //////////////////4
  loopI4: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI4;
  }

  //////////////////5
  loopI5: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI5;
  }
  
  //////////////////6
  loopI6: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI6;
  }

  //////////////////7
  loopI7: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI7;
  }

  //////////////////8
  loopI8: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI8;
  }

  //////////////////9
  loopI9: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI9;
  }

  //////////////////0
  loopI10: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);

  //////////////////1
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI10;
  }
////////////////////////////////////////////

  //////////////////1
  loopI11: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI11;
  }

  //////////////////2
  loopI12: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI12;
  }
  //////////////////3
  loopI13: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI13;
  }

  //////////////////4
  loopI14: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI14;
  }

  //////////////////5
  loopI15: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI15;
  }

  //////////////////6
  loopI16: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI16;
  }

  //////////////////7
  loopI17: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI17;
  }

  //////////////////8
  loopI18: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI18;
  }

  //////////////////9
  loopI19: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI19;
  }

  //////////////////0
  loopI20: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  //////////////////2
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI20;
  }

///////////////////////////////////////////////////////////

//////////////////1
loopI21: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI21;
  }
  

  //////////////////2
  loopI22: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI22;
  }


  //////////////////3
  
  loopI23: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI23;
  }

  //////////////////4
  loopI24: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI24;
  }

  //////////////////5
  loopI25: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI25;
  }

  //////////////////6
  loopI26: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI26;
  }


  //////////////////7
  loopI27: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI27;
  }

  //////////////////8
  loopI28: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI28;
  }

  //////////////////9
  loopI29: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI29;
  }

  
  //////////////////0
  loopI30: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////3
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, HIGH);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI30;
  }

///////////////////////////////////////////////////////

//////////////////1
loopI31: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI31;
  }
  //////////////////2
  loopI32: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI32;
  }


  //////////////////3
  loopI33: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI33;
  }


  //////////////////4
  loopI34: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI34;
  }


  //////////////////5
  loopI35: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI35;
  }

  //////////////////6
  loopI36: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI36;
  }


  //////////////////7
  loopI37: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI37;
  }

  //////////////////8
  loopI38: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI38;
  }

  //////////////////9
  loopI39: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI39;
  }

  //////////////////0
  loopI40: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////4
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI40;
  }

/////////////////////////////////////////

  /////////////////1
  loopI41: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI41;
  }
  
  //////////////////2
  loopI42: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI42;
  }

  //////////////////3
  loopI43: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI43;
  }

  //////////////////4
  loopI44: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI44;
  }

  //////////////////5
  loopI45: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI45;
  }

  //////////////////6
  loopI46: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI46;
  }


  //////////////////7
  loopI47: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI47;
  }

  //////////////////8
  loopI48: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI48;
  }


  //////////////////9
  loopI49: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI49;
  }

  //////////////////0
  loopI50: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////5
  digitalWrite(AA, LOW);
  digitalWrite(BB, HIGH);
  digitalWrite(CC, LOW);
  digitalWrite(DD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI50;
  }

/////////////////////////////////////////

  /////////////////1
  loopI51: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI51;
  }

  
  
  //////////////////2
  loopI52: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI52;
  }


  //////////////////3
  loopI53: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI53;
  }


  //////////////////4
  loopI54: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI54;
  }



  //////////////////5
  loopI55: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI55;
  }


  //////////////////6
  loopI56: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI56;
  }


  //////////////////7
  loopI57: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI57;
  }



  //////////////////8
  loopI58: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  delay(100);
  if (dipState == HIGH){
    goto loopI58;
  }


  //////////////////9
  loopI59: dipState = digitalRead(dipSwitch);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI59;
  }

  //////////////////0
  loopI60: dipState = digitalRead(dipSwitch);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  
  //////////////////0
  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);

  digitalWrite(AAA, LOW);
  digitalWrite(BBB, LOW);
  digitalWrite(CCC, LOW);
  digitalWrite(DDD, LOW);

  digitalWrite(AAAA, LOW);
  digitalWrite(BBBB, LOW);
  digitalWrite(CCCC, LOW);
  digitalWrite(DDDD, HIGH);
  delay(100);
  if (dipState == HIGH){
    goto loopI60;
    var = var + 1;
  }

  ////////////////////////////////////////////////////////////////10MIN
  
  
  if (var = 1){
    
  digitalWrite(AAAA, LOW);
  digitalWrite(BBBB, LOW);
  digitalWrite(CCCC, LOW);
  digitalWrite(DDDD, HIGH);
  delay(100);
  goto stopwatch;
  }
  if (var = 2){
    
  digitalWrite(AAAA, LOW);
  digitalWrite(BBBB, LOW);
  digitalWrite(CCCC, HIGH);
  digitalWrite(DDDD, LOW);
  delay(100);
  goto stopwatch;
  }
  if (var = 3){
    
  digitalWrite(AAAA, LOW);
  digitalWrite(BBBB, LOW);
  digitalWrite(CCCC, HIGH);
  digitalWrite(DDDD, HIGH);
  delay(100);
  goto stopwatch;
  }

  if (var = 4){
    
  digitalWrite(AAAA, LOW);
  digitalWrite(BBBB, HIGH);
  digitalWrite(CCCC, LOW);
  digitalWrite(DDDD, LOW);
  delay(100);
  goto stopwatch;
  }

  if (var = 5){
    
  digitalWrite(AAAA, LOW);
  digitalWrite(BBBB, HIGH);
  digitalWrite(CCCC, LOW);
  digitalWrite(DDDD, HIGH);
  delay(100);
  goto stopwatch;
  }

  if (var = 6){
    
  digitalWrite(AAAA, LOW);
  digitalWrite(BBBB, HIGH);
  digitalWrite(CCCC, HIGH);
  digitalWrite(DDDD, LOW);
  delay(100);
  goto stopwatch;
  }
  
  if (var = 7){
    
  digitalWrite(AAAA, LOW);
  digitalWrite(BBBB, HIGH);
  digitalWrite(CCCC, HIGH);
  digitalWrite(DDDD, HIGH);
  delay(100);
  goto stopwatch;
  }

  if (var = 8){
    
  digitalWrite(AAAA, HIGH);
  digitalWrite(BBBB, LOW);
  digitalWrite(CCCC, LOW);
  digitalWrite(DDDD, LOW);
  delay(100);
  goto stopwatch;
  }

  if (var = 9){
    
  digitalWrite(AAAA, HIGH);
  digitalWrite(BBBB, LOW);
  digitalWrite(CCCC, LOW);
  digitalWrite(DDDD, HIGH);
  delay(100);
  goto stopwatch;
  }

 
 
}
