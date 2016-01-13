void injectDown(){
  digitalWrite(49,LOW);
  }

void injectUp(){
  digitalWrite(49,HIGH);
  }

void clampClose() {
  digitalWrite(47,LOW); //???
  digitalWrite(46,HIGH);
  }
void clampOpen() {
  digitalWrite(46,LOW); //???
  digitalWrite(47,HIGH);
  }
void clampRelease() {
  digitalWrite(46,HIGH);
  digitalWrite(47,HIGH);
  }


void setup() {
  // put your setup code here, to run once:
  bool state = HIGH;
  pinMode(53,INPUT);
  pinMode(52,INPUT);
  pinMode(51,OUTPUT); //#5 unused
  digitalWrite(51,HIGH);
  pinMode(50,OUTPUT); //#4 unused valve 5
  digitalWrite(50,HIGH);
  pinMode(49,OUTPUT); //#3 inject down valve 2
  pinMode(48,OUTPUT); //#2 unused valve 4
  digitalWrite(48,HIGH);
  pinMode(47,OUTPUT); //#1 clamp closed valve 1
  pinMode(46,OUTPUT); //#0 clamp open valve 2
  }

void loop() {
  // put your main code here, to run repeatedly:
  clampClose();
  //TODO: Wait for Closed sensor
  delay(1000);
  injectDown();
  delay(5000);
  injectUp();
  delay(5000);
  clampOpen();
  //TODO: Wait for part to fall
  delay(3000);
}
