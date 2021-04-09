int pin = 9;
void setup(){
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);
}
void loop(){
  int val = analogRead(A0);
  val = map(val, 0, 1023, 1, 999);
  digitalWrite(pin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(pin, LOW);
  delayMicroseconds(val);
}
