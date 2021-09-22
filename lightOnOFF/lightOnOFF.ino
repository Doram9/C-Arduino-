int cds = A0;
int yellow = 8;
void setup() {
  Serial.begin(9600);
  pinMode(yellow, OUTPUT);
}

void loop() {
  int val = analogRead(cds);
  if(val > 500) {
    digitalWrite(yellow, HIGH);
  } else {
    digitalWrite(yellow, LOW);
  }
  Serial.println(val);
  delay(1000);
}
