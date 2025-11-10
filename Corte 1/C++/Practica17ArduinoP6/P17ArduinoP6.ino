const int ledPin = 13; // Dicta el led que debe encender 

void setup() {
  pinMode(ledPin, OUTPUT); // Para los pines externos en una protoboard
}

void loop() {
  int blinkCount = 2; 
  int maxBlinks = 5;  


  while (blinkCount < maxBlinks) {
    digitalWrite(ledPin, HIGH); 
    delay(500);                 
    digitalWrite(ledPin, LOW);  
    delay(300);                 
    blinkCount++;               
  }

 delay(1000); 

}