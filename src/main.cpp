#include <Arduino.h>

#include <FastLED.h>

#define NUM_LEDS 12
#define LED_PIN 7

CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(9600);

  FastLED.addLeds<NEOPIXEL, NUM_LEDS>(leds, NUM_LEDS);
  FastLED.setBrightness(50);
}


void loop() {
  fill_solid(leds, NUM_LEDS, CRGB::DarkGreen);

  //head
  leds[5] = CRGB::Red;
  leds[6] = CRGB::Red;
  leds[7] = CRGB::Red;

  // left leg
  leds[0] = CRGB::Blue;
  leds[1] = CRGB::Blue;

  // right leg
  leds[10] = CRGB::Blue;
  leds[11] = CRGB::Blue;

  FastLED.show();
}

