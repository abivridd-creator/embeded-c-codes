float find_the_resistance_required_to_light_led_without_burning_it(float voltage_supply,float voltage_led,float current_led){
  return (voltage_supply - voltage_led) / current_led;
}

float a = 12;
float b = 2.5;
float c = 0.020;


void setup() {
Serial.begin(19200);
Serial.println(find_the_resistance_required_to_light_led_without_burning_it(a,b,c));
}

void loop() {



}
