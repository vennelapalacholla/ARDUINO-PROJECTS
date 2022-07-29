int IRSensor = 2; //connect ir sensor to aurdino pin 2
int LED = 13; //connect LED to aurdino pin 13

void setup() {
  // put your setup code here, to run once:
  pinMode(IRSensor, INPUT); //sensor pin INPUT
  pinMode(LED, OUTPUT); //Led pin OUTPUT
}

void loop() {
  
  // put your main code here, to run repeatedly:
int statusSensor=digitalRead(IRSensor);

if(statusSensor==1){
  digitalWrite(LED,LOW);//LED LOW
}
else
{
  digitalWrite(LED,HIGH);//LED High
  }
}
