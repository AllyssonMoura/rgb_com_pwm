void setup(){
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
}

void loop(){
  delay(1000);
  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 0);
  
  delay(1000);
  analogWrite(3, 0);
  analogWrite(5, 255);
  analogWrite(6, 0);
  
  delay(1000);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 255);
}