#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

#define TFT_CS 1
#define TFT_RST 2
#define TFT_DC 3
#define TFT_SCLK 4
#define TFT_MOSI 5

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

#include "mxswitch.h"
const int switches[2, 3, 4, 5];

for (i=0; i < 4; i++) {
  buzzer MxSwitch()
}

new DateTime now;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  tft.init(284, 76);
  tft.setColRowStart(82, 18);
  tft.setRotation(2);
  Serial.println("TFT display initialised!");
  tft.fillScreen(ST77XX_BLACK);

  tft.setCursor(0, 0);

}

void loop() {
  // put your main code here, to run repeatedly:
  
}
