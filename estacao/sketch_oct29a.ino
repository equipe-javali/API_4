#include <WiFi.h>
#include <HTTPClient.h>
#include <esp_mac.h>
#include "time.h"
#include "DHT.h"

// MODULO 1
#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

char uid[13];

char *ssid = "Redmi Note 13";
char *pwd = "SeNhA132";

char *ntpServer = "br.pool.ntp.org";
long gmtOffset = -3;
int daylight = 0;
time_t now;
struct tm timeinfo;

String serverName = "http://192.168.88.197:3001/recepcaoDados/registrar";

void connectWiFi() {
  Serial.print("Conectando ");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Conectado com sucesso, com o IP ");
  Serial.println(WiFi.localIP());
}

void setup() {
  Serial.begin(115200);

  dht.begin();
  
  uint8_t mac[6];
  esp_read_mac(mac, ESP_MAC_WIFI_STA);
  snprintf(uid, sizeof(uid), "%02X%02X%02X%02X%02X%02X", mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);

  WiFi.begin(ssid, pwd);
  connectWiFi();
  configTime(gmtOffset, daylight, ntpServer);
  if (!getLocalTime(&timeinfo)) {
    Serial.println("Erro ao acessar o servidor NTP");
  } else {
    Serial.print("A hora agora eh ");
    Serial.println(time(&now));
  }
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    if (!getLocalTime(&timeinfo)) {
      Serial.println("Erro ao coletar data/hora");
    }
    WiFiClient wclient;
    HTTPClient http_post;

    http_post.begin(wclient, serverName);
    http_post.addHeader("Content-Type", "application/json");
    http_post.addHeader("x-api-key", "4554545sdsdsd5454");

    float u = dht.readHumidity();
    float t = dht.readTemperature();

    Serial.print(F("Umidade: "));
    Serial.print(u);
    Serial.print(F("% Temperatura: "));
    Serial.print(t);
    Serial.print(F("°C "));

    String dados = "{\"uid\":\"" + String(uid) + "\",\"uxt\":" + time(&now) + ",\"tempc\":" + t + ",\"umidade\":" + u + "}";

    int http_get_code = http_post.POST(dados.c_str());

    Serial.println("");
    Serial.println(http_get_code);
    if (http_get_code > 0) {
      Serial.println(dados);
      Serial.println(http_post.getString());
    } else {
      Serial.println("Erro ao executar o GET");
    }
  } else {
    Serial.println("Na Fatec nunca tem internet...");
    connectWiFi();
  }
  delay(10000);
}