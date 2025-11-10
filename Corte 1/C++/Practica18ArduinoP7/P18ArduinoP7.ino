const int ledPin = 13; 

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  int blinkCounter = 0; 

  
  do {
    digitalWrite(ledPin, HIGH); 
    delay(500);                 
    digitalWrite(ledPin, LOW);  
    delay(300);                 
    blinkCounter++;             
  } while (blinkCounter < 4);   

  delay(2000); 
}