int LED = 13;
int obstaclePin = 7;
int obstaclePin2 = 8;// This is our input pin
int hasObstacle = HIGH; // HIGH MEANS NO OBSTACLE
const int PIEZO_PIN = A0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(obstaclePin, INPUT);
  pinMode(obstaclePin2, INPUT);
  Serial.begin(250000);  
}
void loop() {
  hasObstacle = digitalRead(obstaclePin)&&digitalRead(obstaclePin2); //Reads the output of the obstacle sensor from the 7th PIN of the Digital section of the arduino
  if (hasObstacle == LOW)//LOW means something is ahead, so illuminates the 13th Port connected LED
  {
    Serial.println("Stop something is ahead!!");
    digitalWrite(LED, HIGH);//Illuminates the 13th Port LED
 
  // Read Piezo ADC value in, and convert it to a voltage
  int piezoADC = analogRead(PIEZO_PIN);
  float piezoV = piezoADC / 1023.0 * 5.0;
  Serial.println("Voltage value from peizo is");
  Serial.println(piezoV);
  delay(50);
  
 // Print the voltage.
}
  else
  {
    Serial.println("Path is clear");
    digitalWrite(LED, LOW);
  }
  delay(50);
}
