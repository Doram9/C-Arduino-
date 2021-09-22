#include <SoftwareSerial.h>

SoftwareSerial bt(3,2); //블루투스 연결

void setup() {
  Serial.begin(9600); //시리얼모니터
  bt.begin(9600); //소프트웨어 시리얼 통신
}

void loop() {
  // put your main code here, to run repeatedly:
  if(bt.available()) { //블루투스쪽에서 데이터를 수신한경우
    Serial.write(bt.read()); //시리얼 모니터에 수신한 데이터를 출력
  }
  if(Serial.available()) { //시리얼 모니터에서 데이터를 전송한 경우
    bt.write(Serial.read()); //전송한 데이터를 블루투스 모듈을 통해 내보낸다.
  }

}
