#include <AccelStepper.h>

#define STEP_PIN 3
#define DIR_PIN 2
#define M0_PIN 5
#define M1_PIN 6
#define M2_PIN 7

// Define stepper object (Driver mode, STEP pin, DIR pin)
AccelStepper stepper(AccelStepper::DRIVER, STEP_PIN, DIR_PIN);

void setup() {
  pinMode(M0_PIN, OUTPUT);
  pinMode(M1_PIN, OUTPUT);
  pinMode(M2_PIN, OUTPUT);

 // 1/32 microstepping 
  digitalWrite(M0_PIN, HIGH);
  digitalWrite(M1_PIN, HIGH);
  digitalWrite(M2_PIN, HIGH);

  stepper.setMaxSpeed(6400); // Set max speed in steps per second
  stepper.setAcceleration(2000); // Set acceleration in steps per second² (making it smoother)
  stepper.setSpeed(106.7); // Initial speed (makes sure that it will be right around 1 rotation per minute, making it function like an actual clock)
}

void loop() {
  stepper.runSpeed(); // Run stepper at constant speed
}
