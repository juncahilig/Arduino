int motor1Pin1 = 4;
int motor1Pin2 = 5;
int motor2Pin1 = 6;
int motor2Pin2 = 7;
int enablePin1 = 8;
int enablePin2 = 9;
int trig1 = 30;
int echo1 = 31;
int trig2 = 28;
int echo2 = 29;
int trig3 = 26;
int echo3 = 27;
int trig4 = 24;
int echo4 = 25;


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(enablePin1, OUTPUT);
  pinMode(enablePin2, OUTPUT);
  pinMode(trig1, OUTPUT);
  pinMode(echo1, INPUT);
  pinMode(trig2, OUTPUT);
  pinMode(echo2, INPUT);
  pinMode(trig3, OUTPUT);
  pinMode(echo3, INPUT);
  pinMode(trig4, OUTPUT);
  pinMode(echo4, INPUT);
}

void loop() {

  long duration1, duration2, duration3, duration4, inches, cm, distance1, distance2, distance3, distance4;
  // The sensor is trig1gered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trig1, LOW);
  delayMicroseconds(2);
  digitalWrite(trig1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig1, LOW);
  duration1 = pulseIn(echo1, HIGH);
  distance1 = (duration1/2) / 29.1;

  
  
  // convert the time into a distance
  inches = microsecondsToInches(duration1);
  cm = microsecondsToCentimeters(duration1);


  
  ///////////////////////////////////FORWARD
  if (distance1 <= 5) {
  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, HIGH);
  
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  
  }
  else if (distance1 >= 6){
  digitalWrite(enablePin1, LOW);
  digitalWrite(enablePin2, LOW);
  }



  //////////////////////////////////BACKWARD
  digitalWrite(trig2, LOW);
  delayMicroseconds(2);
  digitalWrite(trig2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig2, LOW);
  duration2 = pulseIn(echo2, HIGH);
  distance2 = (duration2/2) / 29.1;

  
  if (distance2 <=5){
  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, HIGH);
  
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);

  }
  else if (distance2 >= 6){
  digitalWrite(enablePin1, LOW);
  digitalWrite(enablePin2, LOW);
  }
  

   ///////////////////////////////////LEFT 
   digitalWrite(trig3, LOW);
  delayMicroseconds(2);
  digitalWrite(trig3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig3, LOW);
  duration3 = pulseIn(echo3, HIGH);
  distance3 = (duration3/2) / 29.1;
  
   if (distance3 <=5){
  digitalWrite(enablePin1, LOW);
  digitalWrite(enablePin2, HIGH);
  
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  }
  else if (distance3 >= 6){
  digitalWrite(enablePin1, LOW);
  digitalWrite(enablePin2, LOW);
  }


  ///////////////////////////////////RIGHT
   digitalWrite(trig4, LOW);
  delayMicroseconds(2);
  digitalWrite(trig4, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig4, LOW);
  duration4 = pulseIn(echo4, HIGH);
  distance4 = (duration4/2) / 29.1;
  if (distance4 <=5){
  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, LOW);
  
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);

  }
  else if (distance4 >= 6){
  digitalWrite(enablePin1, LOW);
  digitalWrite(enablePin2, LOW);
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
