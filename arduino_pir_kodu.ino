int pirSensor = 3;


void setup() {
  pinMode(pirSensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int hareket = digitalRead(pirSensor);

  if(hareket == HIGH) {

    Serial.println('1');

  } else {

    Serial.println('0');
  }

  delay(10);


}
