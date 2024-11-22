#include <Servo.h>

Servo myservo; // Servo object to control the solar panel

#define LDR_1 A0 // Pin for the first LDR
#define LDR_2 A1 // Pin for the second LDR

int pos = 90;        // Initial position of the servo (centered)
int Resistance = 20; // Threshold for considering the light intensity as equal

void setup() {
  myservo.attach(4); // Attach the servo to pin 4
  pinMode(LDR_1, INPUT); // Configure LDR_1 as an input
  pinMode(LDR_2, INPUT); // Configure LDR_2 as an input

  myservo.write(pos); // Set the initial positio n of the servo
  delay(1000);        // Wait for the servo to stabilize
}

void loop() {
  int value_1 = analogRead(LDR_1); // Read the value from LDR_1
  int value_2 = analogRead(LDR_2); // Read the value from LDR_2

  // Check if the difference in light intensity is within the threshold
  if (abs(value_1 - value_2) <= Resistance) {
    // Light levels are balanced, no movement needed
    return;
  }

  // Rotate the servo based on which LDR detects more light
  if (value_1 > value_2) {
    if (pos < 180) { // Ensure the servo does not exceed its limit
      pos += 1;
      myservo.write(pos); // Update the servo position
      delay(15); // Small delay for smooth movement
    }
  } else if (value_2 > value_1) {
    if (pos > 0) { // Ensure the servo does not go below its limit
      pos -= 1;
      myservo.write(pos); // Update the servo position
      delay(15); // Small delay for smooth movement
    }
  }
}
