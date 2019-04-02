
int lightsensor = A0;

int analogvalue;

void setup() {
    Serial.begin();
    Particle.variable("analogvalue", &analogvalue, INT);
}




void loop() {
    analogvalue = analogRead(lightsensor);
    Serial.printlnf("%d", analogvalue);
    Particle.publish("lux", String(analogvalue), PRIVATE);
    delay(30000);
    

}