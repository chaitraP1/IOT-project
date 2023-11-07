int flameSensorPin = A0; // Define the analog pin for the flame sensor
int threshold = 300;    // Set a threshold value for flame detection

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(flameSensorPin); // Read the analog value from the sensor
  
  if (sensorValue < threshold) {
    Serial.println("Flame detected!");
    // You can add additional actions here, like turning on a relay or an LED.
  } else {
    Serial.println("No flame detected");
    // You can add additional actions here for when no flame is detected.
  }

  delay(1000); // Delay for better visualization (optional)
}