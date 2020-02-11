int i = 0;
int x = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (x = 1; x <= 255; x = x + 10) {
    analogWrite(11, x);
    delay(100);
    for (i = 0; i < x; i = i + 10) {
      Serial.print("o");
    }
    Serial.println("");
  }
  for (x = 255; x >= 0; x = x - 10) {
    analogWrite(11, x);
    delay(100);
    for (i = x; i > 0; i = i - 10) {
      Serial.print("o");
    }
    Serial.println("");
  }
}