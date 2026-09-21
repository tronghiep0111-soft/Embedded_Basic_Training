// main.cpp - Code thử nghiệm Ngày 1
#include <Arduino.h>

#define LED_PIN 2 // Chân LED tích hợp (ESP32-S3 thường là GPIO 2 hoặc 4; Arduino Uno là GPIO 13)

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(115200);
    Serial.println("Khoa hoc Lap trinh Nhung - Ngay 1!");
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(500); // Chớp tắt 500ms
    digitalWrite(LED_PIN, LOW);
    delay(500);
}