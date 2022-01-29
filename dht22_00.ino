#include <DHT.h>

#define DHTPIN 2

#define DHTTYPE DHT22

DHT dht (DHTPIN, DHTTYPE);

#define DHT2PIN 3

#define DHT2TYPE DHT22

DHT dht2(DHT2PIN,DHT2TYPE);

#define DHT3PIN 4

#define DHT3TYPE DHT22

DHT dht3(DHT3PIN,DHT3TYPE);

#define DHT5PIN 5

#define DHT5TYPE DHT22

DHT dht4(DHT5PIN,DHT5TYPE);

void setup() 
{

Serial.begin(9600);

dht.begin();
}

void loop() 
{

delay(2000);

float humid = dht.readHumidity();

float temp=dht.readTemperature();

Serial.println("humidity ");

Serial.println (humid);

Serial.println("Temperature= ");

Serial.println (temp);

Serial.println("Degree centigrade=");
}
