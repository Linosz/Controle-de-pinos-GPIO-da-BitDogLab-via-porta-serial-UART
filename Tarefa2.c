#include <stdio.h>
#include "pico/stdlib.h"

// Definições dos LEDs RGB e Buzzer
#define LED_GREEN_PIN 11
#define LED_BLUE_PIN 12
#define LED_RED_PIN 13
#define BUZZER_PIN 21

void desligar_todos_leds() {
    gpio_put(LED_GREEN_PIN, 0);
    gpio_put(LED_BLUE_PIN, 0);
    gpio_put(LED_RED_PIN, 0);
}
void ligar_led_verde() {
    desligar_todos_leds();
    gpio_put(LED_GREEN_PIN, 1)
}
void ligar_led_azul() {
    desligar_todos_leds();
    gpio_put(LED_BLUE_PIN, 1)
}
void ligar_led_azul() {
    desligar_todos_leds();
    gpio_put(LED_RED_PIN, 1)
}
void ligar_todos_leds() {
    gpio_put(LED_GREEN_PIN, 1);
    gpio_put(LED_BLUE_PIN, 1);
    gpio_put(LED_RED_PIN, 1);
}
void acionar_buzzer() {
    gpiou_put(BUZZER_PIN, 1);
    sleep_ms(2000);
    gpiou_put(BUZZER_PIN, 0);
}
