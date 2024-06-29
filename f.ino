void setup() {
DDRB |= 0x0F;
pinMode(4,INPUT_PULLUP);
pinMode(5,INPUT_PULLUP);
pinMode(6,INPUT_PULLUP);
pinMode(7,INPUT_PULLUP);
pinMode(13,OUTPUT);
Serial.begin(9600);
}

void loop() {
  


PORTB = 0b00001111;  //  All Rows are high
PORTB = 0b00001110;    // R1 LOW
//Serial.println(PIND & 0x20);
if((PIND & 0x10)==0){
  Serial.println('1');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
}
  if((PIND & 0x20)==0){
  Serial.println('2');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
}
  if((PIND & 0x40)==0){
  Serial.println('3');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;



  }
    if((PIND & 0x80)==0){
  Serial.println('A');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
    }
  
PORTB = 0b00001111;  //  All Rows are high
PORTB = 0b00001101;    // R2 LOW
//Serial.println(PIND & 0x20);
if((PIND & 0x10)==0){
  Serial.println('4');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
}
  if((PIND & 0x20)==0){
  Serial.println('5');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
}
  if((PIND & 0x40)==0){
  Serial.println('6');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;



  }
    if((PIND & 0x80)==0){
  Serial.println('B');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
    }
    PORTB = 0b00001111;  //  All Rows are high
PORTB = 0b00001011;    // R3 LOW
//Serial.println(PIND & 0x20);
if((PIND & 0x10)==0){
  Serial.println('7');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
}
  if((PIND & 0x20)==0){
  Serial.println('8');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
}
  if((PIND & 0x40)==0){
  Serial.println('9');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;



  }
    if((PIND & 0x80)==0){
  Serial.println('C');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
    }
    PORTB = 0b00001111;  //  All Rows are high
PORTB = 0b00000111;    // R3 LOW
//Serial.println(PIND & 0x20);
if((PIND & 0x10)==0){
  Serial.println('*');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
}
  if((PIND & 0x20)==0){
  Serial.println('0');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
}
  if((PIND & 0x40)==0){
  Serial.println('#');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;



  }
    if((PIND & 0x80)==0){
  Serial.println('D');
  digitalWrite(13,HIGH);
  delay(500);
 
    PORTB = 0b00001111;
    }
  }
     
