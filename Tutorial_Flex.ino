void setup() {
  // put your setup code here, to run once:
  pinMode(D3,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D3,HIGH);
  delay(1500);
  digitalWrite(D3,LOW);
  
  digitalWrite(D3,HIGH);
  delay(500);
  digitalWrite(D3,LOW);
  delay(50);
  digitalWrite(D3,HIGH);
  delay(500);
  digitalWrite(D3,LOW);
  delay(50);
  digitalWrite(D3,HIGH);
  delay(500);
  digitalWrite(D3,LOW);
  
  delay(250);

  digitalWrite(D3,HIGH);
  delay(500);
  digitalWrite(D3,LOW);

  delay(250);

  digitalWrite(D3,HIGH);
  delay(1500);
  digitalWrite(D3,LOW);
  delay(50);
  digitalWrite(D3,HIGH);
  delay(500);
  digitalWrite(D3,LOW);

  delay(2000);
}
