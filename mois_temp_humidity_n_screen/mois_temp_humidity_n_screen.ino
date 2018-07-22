#include <dht.h>
#include <LiquidCrystal.h>  
int Contrast=100 ;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   
//12-4    11-6   6-3  5-11   4-12   2-14    3-13    
#include "DHT.h"
#define dht_apin A0 // Analog Pin sensor is connected to
int sensor_pin = A1; 
int output_value ;
dht DHT;
 
void setup(){
  { 
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
  }  
  Serial.begin(19200);
 
  
  
 
}//end "setup()"
 
void loop(){
  //Start of Program 
 
    DHT.read11(dht_apin);
    lcd.setCursor(0, 0);
    lcd.print("Humidity = ");
   lcd.print(DHT.humidity);
 lcd.setCursor(0, 1);
   lcd.print("Temp = ");
   lcd.print(DHT.temperature); 
   lcd.print("C  ");
    
    
  delay(2000);
   output_value= analogRead(sensor_pin);

   output_value = map(output_value,550,0,0,100);
   lcd.setCursor(0, 0);
lcd.print("Moisture : ");

  lcd.print(output_value);
   delay(1000);
//Fastest should be once every two seconds.
 
}// end loop() 
