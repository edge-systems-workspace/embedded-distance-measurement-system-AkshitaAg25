#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author AkshitaAg25
 * @date 2026-02-19
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define TRIG pin (Use pin 9)
int trigPin = 9;

 // TODO 2:
 // Define ECHO pin (Use pin 10)
int echoPin = 10;

 // TODO 3:
 // Create variable to store duration
long duration;

 // TODO 4:
 // Create variable to store calculated distance
float distance;

void setup() {

    // TODO 5:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);
    // TODO 6:
    // Configure TRIG as OUTPUT
    pinMode(trigPin, OUTPUT);

    // TODO 7:
    // Configure ECHO as INPUT
    pinMode(echoPin, INPUT);

    // TODO 8:
    // Print system initialization message
    Serial.println("Ultrasonic Distance Measurement Initialized");
}

// void loop() {
//
//     // TODO 9:
//     // Set TRIG LOW for 2 microseconds
//     digitalWrite(trigPin, LOW);
//
//     // TODO 10:
//     // Send 10 microsecond pulse on TRIG
//     digitalWrite(trigPin, HIGH);
//
//     // TODO 11:
//     // Measure pulse duration on ECHO using pulseIn()
//     duration = pulseIn(echoPin, HIGH);
//
//     // TODO 12:
//     // Calculate distance in cm
//     distance = (duration * 0.034) / 2;
//
//     // TODO 13:
//     // Print calculated distance
//     Serial.print("Distance: ");
//     Serial.print(distance);
//     Serial.println(" cm");
//
//     // TODO 14:
//     // Add delay (500ms)
//     delay(500);
// }
