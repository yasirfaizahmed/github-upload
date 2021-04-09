void setup(){
 pinMode(A1, OUTPUT);
 pinMode(A0, INPUT); 
}
int val;
void loop(){

  val = analogRead(A0);
  val = map(val, 0, 1023, 0, 1023);
  analogWrite(A1, val);
  delay(10);
}
