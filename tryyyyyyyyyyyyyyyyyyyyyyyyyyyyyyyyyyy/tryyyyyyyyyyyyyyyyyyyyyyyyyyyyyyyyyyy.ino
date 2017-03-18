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
  digitalWrite(AAA, HIGH);
  digitalWrite(BBB, LOW);
  digitalWrite(CCC, LOW);
  digitalWrite(DDD, HIGH);
  delay(10000);

}
