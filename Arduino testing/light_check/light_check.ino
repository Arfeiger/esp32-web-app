/*
 * light_check
 * 
 * Light sensor testing
 * 
 * Values:
 *  Very bright: > 9900
 *  Bright 700 to 990
 *  Moody: 400 to 700
 *  Dark: 100 to 400
 *  tital darkness < 100
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
