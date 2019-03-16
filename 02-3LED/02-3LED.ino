int red = 10;
int yellow = 9;
int green = 8;
int delaytime=1000;

void setup() {
  // 8, 9, 10핀을 출력핀으로 설정
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(delaytime);
  digitalWrite(red, LOW);
  delay(delaytime);

  digitalWrite(yellow, HIGH);
  delay(delaytime);
  digitalWrite(yellow, LOW);
  delay(delaytime);

  digitalWrite(green, HIGH);
  delay(delaytime);
  digitalWrite(green, LOW);
  delay(delaytime);
}
