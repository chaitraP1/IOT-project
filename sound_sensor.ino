const int soundPin = A0; // Connect the sound sensor to analog pin A0

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int soundValue = analogRead(soundPin); // Read the analog value from the sensor
  Serial.print("Sound Value: ");
  Serial.println(soundValue);
  delay(1000); // Wait for 1 second before reading again
}