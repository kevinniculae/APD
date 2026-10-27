// main.ino – schelet de firmware pentru nodul de achiziție
#include "config.h"
void setup() {
Serial.begin(SERIAL_BAUD);
}
void loop() {
int raw = analogRead(SENSOR_PIN);
Serial.println(raw);
delay(SAMPLE_PERIOD_MS);
}
float convertAdcToVoltage(int rawAdc) {
    return (rawAdc * 5.0f) / 1023.0f;
}
