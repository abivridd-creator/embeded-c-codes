void setup() {
  Serial.begin(9600);

}

void loop() {
  if (Serial.available()) {
    String mr_test_dummy = Serial.readString();
    double decimal_num = 0;

    for (int i = 0; i < mr_test_dummy.length(); i++) {
      decimal_num = decimal_num + (double(mr_test_dummy[i] - 48) * pow(2, mr_test_dummy.length() - 1 - i));
      
    }
    Serial.println(round(decimal_num));
    
  }

}
