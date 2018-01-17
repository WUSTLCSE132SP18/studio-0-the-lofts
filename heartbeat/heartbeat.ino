void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  int time = millis();
  digitalWrite(13, HIGH);
  Serial.print(time);
  Serial.println(" secs have elapsed");
  delay(1000);
  time = millis();
  digitalWrite(13, LOW);
  Serial.print(time);
  Serial.println(" secs have elapsed");
  delay(1000);
}

