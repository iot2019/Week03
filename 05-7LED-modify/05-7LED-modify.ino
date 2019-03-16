int count=0;  //점멸 횟수 변수

void setup() {
  Serial.begin(9600);  //아두이노와 PC간의 통신 속도 설정
  
  for(int i=4; i<11;i++){ //4~10까지의 핀을 출력핀으로 설정
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i=4; i<11; i++){ //4~10까지의 핀에 연결된 LED를 켠다.
    digitalWrite(i, HIGH);
  }
  delay(1000); //1초 쉰다.
  
  for(int i=4; i<11; i++){ //4~10까지의 핀에 연결된 LED를 끈다.
    digitalWrite(i, LOW);
  }
  delay(1000); //1초 쉰다.
  
  count+=1; //점멸횟수 변수를 증가시킨다.
  Serial.print(count); //시리얼모니터에 출력한다.
  Serial.println("번 점멸");
}
