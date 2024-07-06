void print_number(int a) {
  PORTD = PORTD & 0b00000011;
  PORTB = PORTB & 0b01111111;
  switch (a) {
    case 0:
      PORTD = PORTD | 0b11111100;
      PORTB = PORTB & 0b11111110;
      break;

    case 1:
      PORTD = PORTD | 0b00011000;
      PORTB = PORTB & 0b11111110;
      break;

    case 2:
      PORTD = PORTD | 0b01101100;
      PORTB = PORTB | 0b00000001;
      break;

    case 3:
      PORTD = PORTD | 0b00111100;
      PORTB = PORTB | 0b00000001;
      break;

    case 4:
      PORTD = PORTD | 0b10011000;
      PORTB = PORTB | 0b00000001;
      break;

    case 5:
      PORTD = PORTD | 0b10110100;
      PORTB = PORTB | 0b00000001;
      break;

    case 6:
      PORTD = PORTD | 0b11110100;
      PORTB = PORTB | 0b00000001;
      break;

    case 7:
      PORTD = PORTD | 0b00011100;
      PORTB = PORTB & 0b11111110;
      break;

    case 8:
      PORTD = PORTD | 0b11111100;
      PORTB = PORTB | 0b00000001;
      break;

    case 9:
      PORTD = PORTD | 0b10111100;
      PORTB = PORTB | 0b00000001;
      break;

  }
}

void setup() {
  DDRD = DDRD | 0b11111100;
  DDRB = DDRB | 0b00000001;


}

void loop() {
  print_number(0);
  delay(1000);
  print_number(1);
  delay(1000);
  print_number(2);
  delay(1000);
  print_number(3);
  delay(1000);
  print_number(4);
  delay(1000);
  print_number(5);
  delay(1000);
  print_number(6);
  delay(1000);
  print_number(7);
  delay(1000);
  print_number(8);
  delay(1000);
  print_number(9);
  delay(1000);
}
