int led1=2;
int led2=3;
int led3=5;

int delaytime = 50;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,HIGH);
  delay(delaytime);
  digitalWrite(led2,HIGH);
  delay(delaytime);
  digitalWrite(led3,HIGH);
  delay(delaytime);
  digitalWrite(led1,LOW);
  delay(delaytime);
  digitalWrite(led2,LOW);
  delay(delaytime);
  digitalWrite(led3,LOW);
  delay(delaytime);

}
