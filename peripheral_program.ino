// Arduino code

// Define the sensor pin
const int moisturePin = A0;
const int heartRatePin = A1;
const int stressguagePin = A2;
const int redPin = 3;
const int greenPin = 5;
const int bluePin = 6;

void setup() {
  // Start the Serial communication to send data to the computer
  Serial.begin(9600);
}

void loop() {
  // Read the sensor value
  int moistureValue = analogRead(moisturePin);

  int heartRateValue = analogRead(heartRatePin);

  // Print the sensor value to the Serial Monitor
  Serial.println(moistureValue);

  // Print the sensor value to the Serial Monitor
  Serial.println(heartRateValue);

  // Wait for a second before reading the sensor again
  delay(1000);
}