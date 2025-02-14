void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(D3,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
}

void loop() {
  digitalWrite(D3,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  int a = random(999);
  int b = random(999);
  int c = random(999);
  int d = random(999);
  if(a>b || a<c){
    analogWrite(D3,128);
    Serial.println("a: "+ String(a) + " b: "+String(b)+" c: "+String(c)+" d: "+String(d));
    Serial.println("White ON!");
    delay(1000);
  }
  if(c>a && a<b){
    analogWrite(D5,128);
    Serial.println("a: "+ String(a) + " b: "+String(b)+" c: "+String(c)+" d: "+String(d));
    Serial.println("Green ON!");
    delay(1000);
  }
  if(b>c && b>a && c<a){
    analogWrite(D6,128);
    Serial.println("a: "+ String(a) + " b: "+String(b)+" c: "+String(c)+" d: "+String(d));
    Serial.println("Red ON!");
    delay(1000);
  }
  if(d>a && d>b && d>c){
    Serial.println("a: "+ String(a) + " b: "+String(b)+" c: "+String(c)+" d: "+String(d));
    Serial.println("ALL ON!");
    for(int i=0;i<10;i++){
      digitalWrite(D3,HIGH);
      digitalWrite(D5,HIGH);
      digitalWrite(D6,HIGH);
      delay(100);
      digitalWrite(D3,LOW);
      digitalWrite(D5,LOW);
      digitalWrite(D6,LOW);
      delay(100);
    }
  }
  digitalWrite(D3,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  delay(10000);
}
