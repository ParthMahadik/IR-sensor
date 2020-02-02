int count = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(A2,HIGH);
  digitalWrite(A1,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead(A0));
delay(1000);
if(analogRead(A0)<500)
count = count+1;
}
