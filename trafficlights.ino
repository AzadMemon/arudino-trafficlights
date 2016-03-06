int red = 13;
int yellow = 12;
int green = 11;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop(){
  changeLights();
  delay(5000);
}

void changeLights(){
  // green off, yellow for 3 seconds
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(3000);
  
  // turn off yellow, then turn red on for 5 seconds
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
  delay(5000);
  
  // turn off red and yellow, then turn on green
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
}