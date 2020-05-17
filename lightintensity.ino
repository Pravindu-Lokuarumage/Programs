int led = D7;
int Sensor = A0;
int analogValue = 0;
void setup() {
    pinMode(led, OUTPUT);
    pinMode(Sensor, INPUT);
}

void loop() {
    analogValue = analogRead(Sensor);
    digitalWrite(led, HIGH);
    String intensity = String (analogValue);
    Particle.publish("Light Intensity" , intensity , PRIVATE);
    delay(5000);
    digitalWrite(led, LOW);
    delay(5000);
}