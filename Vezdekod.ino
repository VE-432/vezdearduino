int GreenOne = 3;
int GreenTwo = 9;
int GreenThree = 13;
int YellowOne = 4;
int YellowTwo = 8;
int YellowThree = 10;
int RedOne = 4;
int RedTwo = 8;
int RedThree = 10;


int
void setup() {
  pinMode(GreenOne, OUTPUT);
  pinMode(GreenTwo, OUTPUT);
  pinMode(GreenThree, OUTPUT);
  pinMode(YellowOne, OUTPUT);
  pinMode(YellowTwo, OUTPUT);
  pinMode(YellowThree, OUTPUT);
  pinMode(RedOne, OUTPUT);
  pinMode(RedTwo, OUTPUT);
  pinMode(RedThree, OUTPUT);
}

void loop() {
 digitalWrite(GreenOne, HIGH);
 digitalWrite(GreenTwo, HIGH);
 digitalWrite(GreenThree, HIGH);
 digitalWrite(YellowOne, LOW);
 digitalWrite(YellowTwo, LOW);
 digitalWrite(YellowThree, LOW);
 digitalWrite(RedOne, LOW);
 digitalWrite(RedTwo, LOW);
 digitalWrite(RedThree, LOW);
 delay(3000);
 digitalWrite(GreenOne, LOW);
 digitalWrite(GreenTwo, LOW);
 digitalWrite(GreenThree, LOW);
 digitalWrite(YellowOne, HIGH);
 digitalWrite(YellowTwo, HIGH);
 digitalWrite(YellowThree, HIGH);
 digitalWrite(RedOne, LOW);
 digitalWrite(RedTwo, LOW);
 digitalWrite(RedThree, LOW); 
 delay(3000);
 digitalWrite(GreenOne, LOW);
 digitalWrite(GreenTwo, LOW);
 digitalWrite(GreenThree, LOW);
 digitalWrite(YellowOne, LOW);
 digitalWrite(YellowTwo, LOW);
 digitalWrite(YellowThree, LOW);
 digitalWrite(RedOne, HIGH);
 digitalWrite(RedTwo, HIGH);
 digitalWrite(RedThree, HIGH); 
 delay(3000);    
}
