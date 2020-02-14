#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>



#define DHT_PIN 4
#define DHT_TYPE DHT11

DHT_Unified dht(DHT_PIN, DHT_TYPE);

uint32_t delayMS;

void setup(){
  Serial.begin(9600); //Start serial communication with the Arduino board.
  Serial.println("DHT11: Humidity and temperature check.\n");
  
  dht.begin(); //Initialize device.
  sensor_t sensor;
  delayMS = sensor.min_delay / 1000; // Set delay between sensor readings based on sensor details.
}
  
void loop(){
  delay(delayMS); //Wait between reads.
  Serial.println("\n");
  sensors_event_t event;
  dht.temperature().getEvent(&event);
  if (isnan(event.temperature)) { //Display error message in case of an error occurs reading temperature.
    Serial.println(F("Error reading temperature!"));
  } else {
    Serial.print(F("Temperature: "));
    Serial.print(event.temperature);
    Serial.println(F("°C"));
  }
  // Get humidity event and print its value.
  dht.humidity().getEvent(&event);
  if (isnan(event.relative_humidity)) { //Display error message in case of an error occurs reading humidity.
    Serial.println(F("Error reading humidity!"));
  } else {
    Serial.print(F("Humidity: "));
    Serial.print(event.relative_humidity);
    Serial.println(F("%"));
  }
}
