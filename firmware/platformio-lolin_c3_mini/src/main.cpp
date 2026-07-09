#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>

#include <Wifi.h>
#include <time.h>

const char* ssid = "YOUR_WIFI_SSID";
const char* password = "WIFI_PASSWORD";

// Timezone settings
const char* ntpServer = "au.pool.ntp.org";
const int gmtOffset_sec = 36000;
const int daylightOffset_sec = 0;

#define TFT_CS 1
#define TFT_RST 2
#define TFT_DC 3
#define TFT_SCLK 4
#define TFT_MOSI 5

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

#include "mxswitch.h"

MxSwitch switch2(2);
MxSwitch switch3(3);
MxSwitch switch4(4);
MxSwitch switch5(5);

#include "buzzer.h"
Buzzer buzz(6);

// new DateTime now;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println(".");
  }

  configTime(gmtOffset_sec, 0, ntpServer);
  
  Serial.println("CONNECTED TO INTERNET");

  tft.init(284, 76);
  // tft.setColRowStart(82, 18);
  tft.setRotation(2);
  Serial.println("TFT display initialised!");
  tft.fillScreen(ST77XX_BLACK);

  tft.setCursor(0, 0);

  // for (int i=0; i<4; i++) { classes[i].begin() }
  switch2.begin();
  switch3.begin();
  switch4.begin();
  switch5.begin();

  
}

void loop() {
  // put your main code here, to run repeatedly:
  struct tm timeinfo;

  if(!getLocalTime(&timeinfo)){
    Serial.println("Failed to obtain time");
    delay(1000);
    return;
  }

  Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S");
  delay(1000);

}
