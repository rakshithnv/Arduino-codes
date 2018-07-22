const int PIEZO_PIN = A0; // Piezo output

void setup() 
{
  Serial.begin(2000000);
}

void loop() 
{
  // Read Piezo ADC value in, and convert it to a voltage
  int piezoADC = analogRead(PIEZO_PIN);
  float piezoV = piezoADC / 1023.0 * 5.0;
  Serial.println(piezoV);
 // Print the voltage.
}
