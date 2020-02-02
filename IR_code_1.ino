int incount = 0;
int outcount = 0;
int diff;
void setup() {
  // put your setup code here, to run once:
  pinMode(5,INPUT);
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(6,INPUT);
  pinMode(9,OUTPUT);
  digitalWrite(A1,HIGH);
  digitalWrite(A0,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(5));
Serial.println(digitalRead(6));
delay(1000);
if(digitalRead(5)<500)
incount = incount+1;
if(digitalRead(6)<500)
outcount= outcount +1;
diff= incount - outcount;
if(diff=0)
analogWrite(9,0);
else if(diff>0 && diff<10)
analogWrite(9,64);
else if(diff>10 && diff<30)
analogWrite(9,127);
else if(diff>30 && diff<70)
analogWrite(9,191);
else if(diff>70)
analogWrite(9,255);
}
