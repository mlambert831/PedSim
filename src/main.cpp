#include <Arduino.h>
#include <Arduino_GFX_Library.h>

#include "pins.h"

Arduino_ESP32RGBPanel *rgb_panel = new Arduino_ESP32RGBPanel(
    kPinDe,
    kPinVsync,
    kPinHsync,
    kPinPclk,
    kPinRed0,
    kPinRed1,
    kPinRed2,
    kPinRed3,
    kPinRed4,
    kPinGreen0,
    kPinGreen1,
    kPinGreen2,
    kPinGreen3,
    kPinGreen4,
    kPinGreen5,
    kPinBlue0,
    kPinBlue1,
    kPinBlue2,
    kPinBlue3,
    kPinBlue4,
    kPinHsyncPolarity,
    kPinHsyncFrontPorch,
    kPinHsyncPulseWidth,
    kPinHsyncBackPorch,
    kPinVsyncPolarity,
    kPinVsyncFrontPorch,
    kPinVsyncPulseWidth,
    kPinVsyncBackPorch,
    kPinPclkActiveNeg,
    kPinPreferSpeed);

Arduino_GFX *gfx = new Arduino_ST7701(rgb_panel, 0 /* rotation */);

void setup() {
  pinMode(kPinBacklight, OUTPUT);
  digitalWrite(kPinBacklight, HIGH);

  gfx->begin();
  gfx->fillScreen(BLACK);
  gfx->setTextColor(WHITE);
  gfx->setTextSize(3);
  gfx->setCursor(40, 200);
  gfx->print("Hello World");
}

void loop() {
  delay(1000);
}
