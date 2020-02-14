/*
 * light_check
 * 
 * Light sensor testing
 * 
 * Created 14/02/2020
 * by Íñigo Turrientes
 */
#define lightSensor A0

void setup() {
  Serial.begin(9600);
  pinMode(lightSensor, INPUT);
}

void loop() {
  Serial.print("Light sensor value: ");
  int soilVal = analogRead(lightSensor);
  Serial.println(soilVal);
  delay(1000);
}
