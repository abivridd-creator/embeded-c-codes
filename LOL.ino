void print_number(int a) {
  PORTD = PORTD & 0b00000011;
  PORTB = PORTB & 0b01111111;
  switch (a) {



    case 0:
      PORTD = PORTD | 0b11111100;
      PORTB = PORTB & 0b11111110;
      break;



    case 7:
      PORTD = PORTD | 0b00011100;
      PORTB = PORTB & 0b11111110;
      break;

  }
}
void setup() {
  DDRD = DDRD | 0b11111100;
  DDRB = DDRB | 0b00000001;
  print_number(7);
  delay(1000);
  print_number(0);
  delay(1000);
  print_number(7);
  delay(1000);


}

void loop() {
  

}
