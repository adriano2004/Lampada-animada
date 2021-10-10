int led1=7;
int led2=6;
int led3=5;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() {
 analogWrite(led1,random(120)+136);
  analogWrite(led2,random(120)+136);
  analogWrite(led3,random(120)+136);
  delay(random(100));
  
}
