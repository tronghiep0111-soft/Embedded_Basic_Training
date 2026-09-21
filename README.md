#Embedded_Basic_Training
#main.cpp - Chương trình Blink LED Ngày 1

#include <Arduino.h>

#define LED_PIN 2 // Thay bằng chân LED trên mạch của bạn (ESP32-S3 thường là GPIO 2 hoặc 4)

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(115200);
    Serial.println("Khoa hoc Lap trinh Nhung 3 Thang - Ngay 1!");
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
}