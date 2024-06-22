void setup() {
 DDRD = DDRD | 0b00000111;

}

void loop() {
 PORTD = PORTD | 0b00000100;
 delay(1000);
 PORTD = PORTD & 0b11111000;
 delay(1000);
 

}
