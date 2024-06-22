void setup() {
  DDRD = DDRD & 0b01111111;
  DDRB = DDRB | 0b00000001;
  Serial.begin(9600);
}

void loop() {
  Serial.println(PIND & 0b10000000, BIN);
  if ((PIND & 0b10000000) == 0b10000000){
    PORTB = PORTB | 0b00000001;
  }
  else {
    PORTB = PORTB & 0b11111110;
  }

}
