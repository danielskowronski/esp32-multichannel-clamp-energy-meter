#include <Arduino.h>
#include <PZEM004Tv30.h>

#define PZEM_RX_PIN 16
#define PZEM_TX_PIN 17

#define PZEM_SERIAL Serial2
#define CONSOLE_SERIAL Serial

PZEM004Tv30 pzems[] = {
    PZEM004Tv30(PZEM_SERIAL, PZEM_RX_PIN, PZEM_TX_PIN, 0x01),
    PZEM004Tv30(PZEM_SERIAL, PZEM_RX_PIN, PZEM_TX_PIN, 0x02)};

void setup() {
    CONSOLE_SERIAL.begin(115200);
}

void loop() {
    for (int i=0; i<2; i++) {
      char buffer[256];
      sprintf(buffer, "0x%00x, %0.2fV, %0.2fA, %0.2fW, %0.3fkWh, %0.1fHz, %0.2f", pzems[i].readAddress(), pzems[i].voltage(), pzems[i].current(), pzems[i].power(), pzems[i].energy(), pzems[i].frequency(), pzems[i].pf());
      CONSOLE_SERIAL.println(buffer);
    }

    CONSOLE_SERIAL.println();
    delay(2000);
}
