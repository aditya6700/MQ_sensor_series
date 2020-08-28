int relay = 10;
int alcoholA0 = A5;
// Your threshold value
int sensorThres = 450;

void setup() {
  pinMode(relay, OUTPUT);
  pinMode(alcoholA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(alcoholA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
    digitalWrite(relay, HIGH);
  
  else
  digitalWrite(relay, LOW);

  delay(100);
}
