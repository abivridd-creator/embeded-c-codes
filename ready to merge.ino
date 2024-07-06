void setup() {

DDRC &= 0b11111000;
PORTC |= 0b00000111;
DDRC = DDRC  | 0b00111000;
Serial.begin(9600);
}

void loop() {
  


PORTC = 0b00000111;  //  All Rows are high
PORTC = 0b00000110;    // R1 LOW
//Serial.println(PIND & 0x20);
if((PIND & 0x10)==0){
  Serial.println('1');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTC = 0b00000111;
}
  if((PIND & 0x20)==0){
  Serial.println('2');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTC = 0b00000111;
}
  if((PIND & 0x40)==0){
  Serial.println('3');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTC = 0b00000111;



  }
  
  
PORTB = 0b00000111;  //  All Rows are high
PORTB = 0b00000101;    // R2 LOW
//Serial.println(PIND & 0x20);
if((PIND & 0x10)==0){
  Serial.println('4');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTC = 0b00000111;
}
  if((PIND & 0x20)==0){
  Serial.println('5');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00000111;
}
  if((PIND & 0x40)==0){
  Serial.println('6');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTC = 0b00000111;



  }
 
    
    PORTB = 0b00000111;  //  All Rows are high
PORTB = 0b00000011;    // R3 LOW
//Serial.println(PIND & 0x20);
if((PIND & 0x10)==0){
  Serial.println('7');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTC = 0b00000111;
}
  if((PIND & 0x20)==0){
  Serial.println('8');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTC = 0b00000111;
}
  if((PIND & 0x40)==0){
  Serial.println('9');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTC = 0b00000111;



  }
 
    }
  
     
