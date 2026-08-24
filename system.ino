#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHTPIN D4
#define DHTTYPE DHT11

#define LIGHT_PIN D5
#define BUZZER_PIN D6

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);

  dht.begin();

  pinMode(LIGHT_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Study Assistant");
  delay(2000);
  lcd.clear();
}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  int lightStatus = digitalRead(LIGHT_PIN);

  if (isnan(temperature) || isnan(humidity)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("DHT11 Error");
    delay(1000);
    return;
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temperature);
  lcd.print("C H:");
  lcd.print(humidity);

  if (lightStatus == LOW) {

    lcd.setCursor(0, 1);
    lcd.print("Light: LOW");

    digitalWrite(BUZZER_PIN, HIGH);
    delay(500);
    digitalWrite(BUZZER_PIN, LOW);

  } else {

    lcd.setCursor(0, 1);
    lcd.print("Study: GOOD");

    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(2000);
}
