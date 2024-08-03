char a[4][4] = {{'1', '2', '3', 'A'},
                {'4', '5', '6', 'B'},
                {'7', '8', '9', 'C'},
                {'*', '0', '#', 'D'}
               };
char key = '0';
String passcode = "0201";
String current = "";

char get_char() {
  for (int i = 4; i <= 7; i++) {
    PORTD = PORTD & (~(1 << i));

    for (int j = 0; j <= 3; j++) {
      if ((PINB & (1 << j)) == 0) {
        PORTD = PORTD | 0b11110000;
        return a[3 - j][7 - i];
      }
    }

    PORTD = PORTD | 0b11110000;
  }
  return 0;
}

void setup()
{
  DDRB = DDRB & 0b11110000;
  PORTB = PORTB | 0b00001111;
  DDRD = DDRD | 0b11111100;
  PORTD = PORTD | 0b11110000;
  PORTD = PORTD & 0b11110011;
  Serial.begin(9600);
}

void loop()
{
  key = get_char();
  if (key != 0) {
    
    if (key != '*') {
      current = current + String(key);
      Serial.println(current);
    }

    else {
      if (current == passcode) {
        Serial.println("Authorised access");
        PORTD = PORTD | 0b00000100;
        delay(3000);
        PORTD = PORTD & 0b11111011;
      }
      else {
        Serial.println("Access denied");
        PORTD = PORTD | 0b00001000;
        delay(3000);
        PORTD = PORTD & 0b11110111;
      }
      current = "";
    }
    
    delay(1000);
  }

}
