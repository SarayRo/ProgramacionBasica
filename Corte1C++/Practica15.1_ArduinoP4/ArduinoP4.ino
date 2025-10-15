const int ledPin = 13; 

void setup() {
  pinMode(13, OUTPUT); 
}

void loop() {
  int blinkCount = 0; 

 
  while (blinkCount < 5) { 
    digitalWrite(ledPin, HIGH); 
    delay(1500);                 
    digitalWrite(ledPin, LOW);  
    delay(500);          
           
    blinkCount++;               
  }
}
