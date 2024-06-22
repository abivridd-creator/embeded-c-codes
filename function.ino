bool a = false;
int reset_button_dependent_led_blinker() {
   digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500);
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500);
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500);
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500);
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500);
  return 120;
}

void setup() {
  pinMode(2,OUTPUT);
  Serial.begin(9600);
  a = reset_button_dependent_led_blinker();
  Serial.println(a);
}

void loop() {
  
}
