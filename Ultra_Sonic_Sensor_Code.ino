#include <NewPing.h>

NewPing Sonar(10, 11, 20); //TrigPin, EchoPin, Max Distance in Cm

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay (50);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("The Distance is: ");
  int distance = Sonar.ping_cm();
  Serial.print(distance);
  Serial.println(" cm");
  delay(5000);
  
}
