// config.h – parametrii nodului de achiziție
#ifndef CONFIG_H
#define CONFIG_H

#define SENSOR_PIN          A0
#define SAMPLE_PERIOD_MS    250 // compromis: 1 s (consum redus, dinamică suficientă)
#define SERIAL_BAUD         115200 // viteză mare; 19200 doar pentru echipamente vechi
#define LED_PIN 13 // LED de stare
#define BUTTON_PIN 2 // buton de pornire/oprire achiziție
#define ALARM_TEMP_C 45.0

#endif