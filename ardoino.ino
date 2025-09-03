#include "config.h"
void setup() {
  Serial.begin(115200);
  delay(1000);
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println(mein_text);
  Serial.println(LED_BUILTIN);
}

void loop() {
  Serial.println(z);
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  if (digitalRead(LED_BUILTIN) == HIGH) {

    Serial.println("led == high");
  }
  if (delay_switch == true ){
  delay(1000);
  }
  digitalWrite(LED_BUILTIN, LOW);
  if (digitalRead(LED_BUILTIN) == LOW) {
    Serial.println("led == low");

  }
  if (delay_switch == true){
  delay(500);
  }
  z += 1;// runden zähler
  if (a == z) {
    delay_switch = false;
  }
}
