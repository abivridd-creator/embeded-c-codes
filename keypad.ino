char a[4][4] = {{'1', '2', '3', 'A'},
                {'4', '5', '6', 'B'},
                {'7', '8', '9', 'C'},
                {'*', '0', '#', 'D'}};

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  Serial.begin(9600);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
}

void loop()
{
  for(int i = 5; i > 1; i--) {
    digitalWrite(i, LOW);
    for(int j = 9; j > 5; j--) {
      if(digitalRead(j) == 0) {
        Serial.println(a[9 - j][5 - i]);
      }
    }
    digitalWrite(i, HIGH);
  }
}
