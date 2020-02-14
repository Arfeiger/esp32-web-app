
/*
 * Values:
 *    Dry soil: 0 to 300
 *    Humid soil: 300 to 700
 *    On water: 700 to 950
 */

#define soilSensor A0

void setup() {
  Serial.begin(9600);
  pinMode(soilSensor, INPUT);
}

void loop() {
  Serial.print("Soil sensor value: ");
  int soilVal = analogRead(soilSensor);
  Serial.println(soilVal);
  delay(1000);
}
