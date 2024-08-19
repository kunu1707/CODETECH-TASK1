int relayPin = 5;
int relayPin2 = 6;
void setup() {
  pinMode(relayPin , OUTPUT);
  pinMode(relayPin2 , OUTPUT);
}
void loop() {
  digitalWrite(relayPin, HIGH);
  delay(8000);
  digitalWrite(relayPin, LOW);
  digitalWrite(relayPin2, HIGH);
  delay(8000);
  
  

}
