int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;
int led12 = 12;
int led13 = 13;
int led14 = 14;
int led15 = 15;
int led16 = 16;
int led17 = 17;
int led18 = 18;
int led19 = 19;
int led20 = 20;
int led21 = 21;
int led22 = 22;
int led23 = 23;
int led24 = 24;
int led25 = 25;
int A = 31;
int L = 30;
const int swit3 = 29;
const int swit2 = 28;
const int swit1 = 27;
const int swit = 26;
int button3 = 0;
int button2 = 0;
int button1 = 0;
int button = 0;
int x = 0;


void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  pinMode(swit3, INPUT);
  pinMode(swit2, INPUT);
  pinMode(swit1, INPUT);
  pinMode(swit, INPUT);
  pinMode(A, OUTPUT);
  pinMode(L, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(led14, OUTPUT);
  pinMode(led15, OUTPUT);
  pinMode(led16, OUTPUT);
  pinMode(led17, OUTPUT);
  pinMode(led18, OUTPUT);
  pinMode(led19, OUTPUT);
  pinMode(led20, OUTPUT);
  pinMode(led21, OUTPUT);  
  pinMode(led22, OUTPUT);  
  pinMode(led23, OUTPUT);  
  pinMode(led24, OUTPUT);  
  pinMode(led25, OUTPUT);    
}

void loop(){
  
  button2 = digitalRead(swit2);
  button = digitalRead(swit);
 

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  //pinMode(echo, INPUT);
  


  // convert the time into a distance
  
 
  
  
  
if (button == HIGH) {
    digitalWrite(L, HIGH);
    /////////////////8
    loop1: if(x == 30){
      goto codeNA;}
    button1 = digitalRead(swit1);
    digitalWrite(led8, HIGH);
    delay(1000);
    digitalWrite(led8, LOW);
    if (button1 == LOW){
      x = x+1;
    goto loop1;
  }
    if (button1 == HIGH){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, LOW);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led13, HIGH);
    digitalWrite(led14, LOW);
    digitalWrite(led15, HIGH);
    digitalWrite(led16, HIGH);
    digitalWrite(led17, LOW);
    digitalWrite(led18, LOW);
    digitalWrite(led19, HIGH);
    digitalWrite(led20, LOW);
    digitalWrite(led21, HIGH);
    digitalWrite(led22, HIGH);
    digitalWrite(led23, HIGH);
    digitalWrite(led24, LOW);
    digitalWrite(led25, LOW);
    delay(5000);

    codeNA:
    ////////////N
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, LOW);
    digitalWrite(led11, HIGH);
    digitalWrite(led12, LOW);
    digitalWrite(led13, HIGH);
    digitalWrite(led14, HIGH);
    digitalWrite(led15, LOW);
    digitalWrite(led16, HIGH);
    digitalWrite(led17, HIGH);
    digitalWrite(led18, LOW);
    digitalWrite(led19, HIGH);
    digitalWrite(led20, LOW);
    digitalWrite(led21, HIGH);
    digitalWrite(led22, LOW);
    digitalWrite(led23, LOW);
    digitalWrite(led24, HIGH);
    digitalWrite(led25, LOW);
    delay(1000);
    ///////////////////A
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, HIGH);
    digitalWrite(led14, LOW);
    digitalWrite(led15, HIGH);
    digitalWrite(led16, LOW);
    digitalWrite(led17, LOW);
    digitalWrite(led18, LOW);
    digitalWrite(led19, HIGH);
    digitalWrite(led20, LOW);
    digitalWrite(led21, LOW);
    digitalWrite(led22, LOW);
    digitalWrite(led23, LOW);
    digitalWrite(led24, LOW);
    digitalWrite(led25, LOW);
    delay(5000);
    x = 0; 
      
    }
}
    if (button2 == HIGH) {
    digitalWrite(A, HIGH);
    /////////////////8
    loop2: 
    if(x == 30){
      goto codeNA;}
    button3 = digitalRead(swit3);
    digitalWrite(led8, HIGH);
    delay(1000);
    digitalWrite(led8, LOW);
    if (button3 == LOW){
      x = x+1;
    goto loop2;
  }
    if (button3 == HIGH){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, LOW);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led13, HIGH);
    digitalWrite(led14, LOW);
    digitalWrite(led15, HIGH);
    digitalWrite(led16, HIGH);
    digitalWrite(led17, LOW);
    digitalWrite(led18, LOW);
    digitalWrite(led19, HIGH);
    digitalWrite(led20, LOW);
    digitalWrite(led21, HIGH);
    digitalWrite(led22, HIGH);
    digitalWrite(led23, HIGH);
    digitalWrite(led24, LOW);
    digitalWrite(led25, LOW);
    delay(5000);

    }
      
    }
      


}



long microsecondsToInches(long microseconds)
{
  // According to Parallax's datasheet for the PING))), there are
  // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per
  // second).  This gives the distance travelled by the ping, outbound
  // and return, so we divide by 2 to get the distance of the obstacle.
  // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}
