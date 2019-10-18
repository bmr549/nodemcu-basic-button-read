/* 
  Basic Button Read on NodeMCU
 
*/

#define BTN_PIN 16
#define LED_PIN 5

void setup() {

  Serial.begin(9600);
  pinMode(BTN_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

}

void loop() {

  float btnValue = digitalRead(BTN_PIN);
  
  if (btnValue < 0.5) {
    digitalWrite(LED_PIN, LOW);
  } else if (btnValue >= 0.5) {
    digitalWrite(LED_PIN, HIGH);
  }
  
  //Serial.print("Button State: "); Serial.println(btnValue);
  //Serial.println();

}
