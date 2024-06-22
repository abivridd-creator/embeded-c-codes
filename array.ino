int a[5];
int i = 0;
void setup() {
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0 ){
    if (i < 5){
      a[i] = Serial.parseInt();
      i++;
    }
    if(i == 5){
      Serial.println(a[0]);
      Serial.println(a[1]);
      Serial.println(a[2]);
      Serial.println(a[3]);
      Serial.println(a[4]);
      i = 0;
    }
  }
}
