
#include "DHT.h"
#define DHTPIN 2    
#define DHTTYPE DHT11   

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode (10,OUTPUT);
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));
  dht.begin();
  float h[5],t[5],f[5];
}

void loop() {
  float h[5],t[5],f[5];

  int i=0;
for (int i=0;i<3;i++){
  

  h[i] = dht.readHumidity();
  t[i] = dht.readTemperature();
  f[i] = dht.readTemperature(true);

  if (isnan(h[i]) || isnan(t[i]) || isnan(f[i])) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
}g]]c]c o
  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(f[i], h[i]);
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t[i], h[i], false);


  Serial.println("Team 20");
  Serial.print(F("Humidity: "));
  Serial.print(h[i]);
  Serial.print(F("%  Temperature: "));
  Serial.print(t[i]);
  Serial.print(F("°C "));
  Serial.print(f[i]);
  Serial.print(F("°F  Heat index: "));
  Serial.print(hic);
  Serial.print(F("°C "));
  Serial.print(hif);
  Serial.println(F("°F"));

      digitalWrite(10,HIGH);
      delay((1/(t[0]*t[1]*t[2]))*50000000);
      digitalWrite(10,LOW);
      delay((1/(t[0]*t[1]*t[2]))*50000000);
//      Serial.print((1/(t[0]*t[1]*t[2]))*50000000);
  
}
