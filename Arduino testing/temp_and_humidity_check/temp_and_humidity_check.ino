#include <dht11.h>
dht11 sensor;
#define DHT11_PIN 4
  
void setup(){
  Serial.begin(9600);
  Serial.println("Ambient temperature and humidity sensor test");
}
  
void loop(){
  sensor.read(DHT11_PIN);    // READ DATA
  Serial.print("\nAmbient temperature: ");
  Serial.print(sensor.temperature);
  Serial.println(" C");
  Serial.print("Ambient humidity: ");
  Serial.print(sensor.humidity);
  Serial.println(" %");
  delay(1000);
}
