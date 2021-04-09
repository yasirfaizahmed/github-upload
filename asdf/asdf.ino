void setup(){
  const int WE = 13;
  Serial.begin(9600);
  for(int i=0;i<13;i++){
    pinMode(i, OUTPUT);
  }
  
  for(int val=1;val<4000;val++){
    for(int bi=11;bi>-1;bi--){
        if(bitRead(val, bi)==1) digitalWrite(bi, HIGH);
        else digitalWrite(bi, LOW);
        //delay(200);
    }
    Serial.println(" ");
    digitalWrite(WE, LOW);delayMicroseconds(1); //pulse
    digitalWrite(WE, HIGH);
    if((val%1000)==0)delay(20000);
  }
}
void loop(){
}
