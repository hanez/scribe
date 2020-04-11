#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN 9
#define SS_PIN 10

#define LED A3


MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  
  SPI.begin();
  mfrc522.PCD_Init();

  Serial.begin(115200);
}

void loop() {
  if (mfrc522.PICC_IsNewCardPresent()
    digitalWrite(LED, HIGH);

  else
    digitalWrite(LED, LOW);
}
