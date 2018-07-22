#include<ESP8266WiFi.h>
#include<Adafruit_MQTT_Client.h>
#define ldr A0
#define wifi Rekha Vishwanath
#define server io.adafruit.com
#define password rakshith1999Preksha2003
#define port 1883
#define username rakshith n v
#define key 4e9eeb08662a48c9b5698a94d6441776
WiFiClient esp;
Adafruit_MQTT_Client esp(&client,server,port,username,key);
Adafruit_MQTT_Publish feed= Adafruit_MQTT_Publish(&mqtt,username"/feeds/publish")


void setup() {
  pinMode(16,OUTPUT);
  Serial.begin(115200);
  delay(10);
  Serial.println("Adafruit MQTT demo");
Serial.println("Connecting to");
Serial.println(wifi);
Wifi.begin(wifi,password);
while(WiFi.status()!=WL_CONNECTED)
{
  delay(500);
  Serial.println(".");// put your setup code here, to run once:
}
Serial.println("WiFi Connected");

Serial.println("IP ADDRESS:");
Serial.println(Wifi.localIP());
Serial.println("Connecting to MQTT");
while(mqtt.connect())
Serial.println(".");

}

void loop() {
  if(mqtt.conected())
  {
    int data = analogRead(ldr);
    Serial.println("\n Sending LDR val");
    Serial.println(data);
    Serial.print("...");
    
    if(feed.publish(data))/
    {
      Serial.println("Success")
    };
     else
     {
      Serial.println("Fail");/ put your main code here, to run repeatedly:
    }
  delay(800);
  }

  

}
