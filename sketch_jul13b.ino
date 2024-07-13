float find_the_resistance_required_to_light_led_without_burning_it(float voltage_supply, float voltage_led, float current_led) {
  return (voltage_supply - voltage_led) / current_led;

}

float a = 0;
float b = 0;
float c = 0;
float result = 0;
float test = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println("give ur voltage supply");
  
  while (!Serial.available());
  a = Serial.parseFloat();
  Serial.println("give ur led voltage");
  
  while (!Serial.available());
  b = Serial.parseFloat();
  Serial.println("give ur led current");
  
  while (!Serial.available()) ;
  c = Serial.parseFloat();


  if (a != 0 && b != 0 && c != 0) {
    result = find_the_resistance_required_to_light_led_without_burning_it(a, b, c);
    Serial.print("resistance required to Light Led without Burning It = ");
    Serial.println(result);
  }

}
