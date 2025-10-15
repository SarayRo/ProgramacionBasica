const int ledPin = 9; 
int numBlinks = 5;   

void setup() {
  pinMode(5, OUTPUT); 
}

void loop() {
  for (int i = 0; i < numBlinks; i++) {
    digitalWrite(ledPin, HIGH); 
    delay(500);                 
    digitalWrite(ledPin, LOW);  
    delay(500);                 
  }
  delay(200); 
}