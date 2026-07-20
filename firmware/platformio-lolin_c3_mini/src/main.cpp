#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>

#include <Wifi.h>
#include <time.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

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

int batteryLevel = 0;
const byte batteryPin = A0; // Remember to check if this is valid

void readVoltage(int seconds) {
  int raw_value = analogRead(batteryPin);

  float voltage = (raw_value / 4095.5);

  int percentage = map(voltage * 100, 320, 420, 0, 100);
  percentage = constrain(percentage, 0, 100);

  
}

void alarmISR() {
  buzz.beep(10, 100);
}

const int MODE_CLOCK = 0;
const int MODE_MACRO = 1;
const int MODE_ALARM = 2;

int currentMode = MODE_CLOCK;

void matchState() {
  switch (currentMode)
  {
  case MODE_CLOCK:
    Serial.println(F("Clock display mode"));
    break;

  case MODE_MACRO:
    Serial.println(F("Macropad mode"));
    break;
  
  case MODE_ALARM:
    Serial.println(F("Alarm mode"));
    
    break;

  default:
    currentMode = MODE_CLOCK;
    break;
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println(".");
  }

  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
  
  Serial.println(F("CONNECTED TO INTERNET"));

  tft.init(284, 76);
  // tft.setColRowStart(82, 18);
  tft.setRotation(2);
  Serial.println(F("TFT display initialised!"));
  tft.fillScreen(ST77XX_BLACK);

  tft.setCursor(0, 0);

  // for (int i=0; i<4; i++) { classes[i].begin() }
  switch2.begin();
  switch3.begin();
  switch4.begin();
  switch5.begin();

  // batteryLevel = analogRead(A0); // solder needed
  
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

  tft.print(&timeinfo, "%A, %B %d %Y %H:%M:%S");

  // batteryLevel = analogRead(A0); // solder connection needed
  
}
