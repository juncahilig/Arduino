/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(17, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(200);              // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(200);              // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(200);              // wait for a second
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(200);              // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(200);              // wait for a second
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);               // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(200);              // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);               // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                // wait for a second
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                // wait for a second
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(200);               // wait for a second
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);               // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(200);              // wait for a second
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);               // wait for a second
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                // wait for a second
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                // wait for a second
  digitalWrite(17, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(17, LOW);    // turn the LED off by making the voltage LOW
  delay(200);               // wait for a second
  digitalWrite(16, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);               // wait for a second
  digitalWrite(16, LOW);    // turn the LED off by making the voltage LOW
  delay(200);              // wait for a second
  digitalWrite(15, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);               // wait for a second
  digitalWrite(15, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                // wait for a second
  digitalWrite(14, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                // wait for a second
  digitalWrite(14, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                // wait for a second
  //////////// 
  digitalWrite(2, HIGH);
  delay(200); 
  digitalWrite(3, HIGH);
  delay(200); 
  digitalWrite(4, HIGH);
  delay(200); 
  digitalWrite(5, HIGH);
  delay(200); 
  digitalWrite(6, HIGH);
  delay(200); 
  digitalWrite(7, HIGH);
  delay(200); 
  digitalWrite(8, HIGH);
  delay(200); 
  digitalWrite(9, HIGH);
  delay(200); 
  digitalWrite(10, HIGH); 
  delay(200); 
  digitalWrite(11, HIGH);
  delay(200);  
  digitalWrite(12, HIGH); 
  delay(200); 
  digitalWrite(13, HIGH); 
  delay(200); 
  digitalWrite(17, HIGH);
  delay(200); 
  digitalWrite(16, HIGH);
  delay(200);  
  digitalWrite(15, HIGH);
  delay(200); 
  digitalWrite(14, HIGH);
  delay(200); 
  digitalWrite(17, LOW);
  digitalWrite(16, LOW);
  digitalWrite(15, LOW);
  digitalWrite(14, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  
  delay(500);
//////////////////////
  digitalWrite(14, HIGH);
  delay(200);
  digitalWrite(15, HIGH);
  digitalWrite(10, HIGH);  
  delay(200);
  digitalWrite(9, HIGH);
  digitalWrite(16, HIGH);
  delay(200);
  digitalWrite(2, HIGH);
  digitalWrite(17, HIGH);
  delay(200);
  digitalWrite(3, HIGH);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  delay(200);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  delay(200);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  delay(200);
  digitalWrite(3, LOW);
  digitalWrite(13, LOW);
  digitalWrite(7, HIGH);  
  delay(200);
  digitalWrite(2, LOW);
  digitalWrite(17, LOW);
  delay(200);
  digitalWrite(2, LOW);
  digitalWrite(17, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);  
  delay(200);
  digitalWrite(9, LOW);
  digitalWrite(16, LOW);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(15, LOW);
  digitalWrite(10, LOW);  
  delay(200);
  digitalWrite(14, LOW);
  delay(500);

  digitalWrite(7, LOW);
  delay(200); 
  digitalWrite(8, LOW);
  delay(200);
  digitalWrite(12, LOW);
  delay(200); 
  digitalWrite(11, LOW);
  delay(200);

//////
  digitalWrite(14, HIGH);
  digitalWrite(17, HIGH);
  delay(200);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(200);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(200);
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(14, LOW);
  digitalWrite(17, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(5, LOW);
  digitalWrite(2, LOW);
  delay(500);
  
//////
  digitalWrite(14, HIGH);
  delay(300);
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(2, HIGH);
  delay(300);
  digitalWrite(3, HIGH);
  delay(300);
  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(11, HIGH);
  delay(300);
  digitalWrite(15, HIGH);
  delay(300);
  digitalWrite(16, HIGH);
  delay(300);
  digitalWrite(17, HIGH);
  delay(300);
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(7, HIGH);
  delay(300);
  digitalWrite(6, HIGH);
  delay(300);
  digitalWrite(5, HIGH);
  delay(300);
  digitalWrite(4, HIGH);
  delay(300);

  
  digitalWrite(14, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(8, LOW);
  digitalWrite(11, LOW);
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(17, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  delay(500);
  

//////
  digitalWrite(14, HIGH);
  digitalWrite(15, HIGH);
  delay(300);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(300);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(300);
  digitalWrite(16, HIGH);
  delay(300);
  digitalWrite(17, HIGH);
  delay(300);
  digitalWrite(7, HIGH);
  delay(1000);
  
  digitalWrite(14, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(2, LOW);
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(17, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(3, LOW);
  delay(500);
///////////////
  digitalWrite(17, HIGH);
  digitalWrite(16, HIGH);
  delay(500);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(9, HIGH);
  delay(100);

  
  
}
