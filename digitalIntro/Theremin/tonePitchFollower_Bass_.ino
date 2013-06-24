void setup() {
 
  Serial.begin(9600);
}

void loop() {
  
  int sensorReading = analogRead(A0);
  int midPoint = 350;
  if (sensorReading > midPoint)
  Serial.println("Everythings chili; Party on!");
  }
  else
  {
  Serial.println("Alert -- release the drones!");
 
  Serial.println(sensorReading) ;
  delay(1);       
}






