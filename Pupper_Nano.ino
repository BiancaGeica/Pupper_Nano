const int MQ5_pin = A0;
int gas_level = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println("Starting the MQ-5 sensor...");

  // delay(120000); two minutes to let him heat (look in the documentation)
  delay(2000); // only for testing, delete later

  Serial.println("MQ-5 is ready!");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // read the values provided by MQ-5
  gas_level = analogRead(MQ5_pin);

  Serial.print("GAS LEVEL:");
  Serial.println(gas_level);

  delay(500); // less messages from Pupper
}
