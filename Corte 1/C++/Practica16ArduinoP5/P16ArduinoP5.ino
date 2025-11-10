const int ledPin = 13; 

void setup() {
  pinMode(13, OUTPUT); 
}

void loop() {
 
  for (int i = 0; i < 5; i++) { 
    digitalWrite(ledPin, HIGH); 
    delay(1100);                 
    digitalWrite(ledPin, LOW);  
    delay(100);                 
  }

  delay(1000); 
}