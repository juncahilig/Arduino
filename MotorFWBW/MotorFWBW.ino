  int motor1Pin1 = 4;
  int motor1Pin2 = 5;
  int motor2Pin1 = 6;
  int motor2Pin2 = 7;
  int enablePin1 = 8;
  int enablePin2 = 9;

  
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(enablePin1, OUTPUT);
  pinMode(enablePin2, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, HIGH);
  
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  
  
  delay(1000);
  digitalWrite(enablePin1, LOW);
  digitalWrite(enablePin2, LOW);
  delay(1000);

  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, HIGH);
  
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  
  
  delay(1000);
  digitalWrite(enablePin1, LOW);
  digitalWrite(enablePin2, LOW);
  delay(1000);
}
