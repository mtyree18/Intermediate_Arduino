int trig = 8;
int echo = 12;
int duration;

void setup() {
Serial.begin(9600);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);

	}

void loop() {
digitalWrite(trig, LOW);
delay(5);
digitalWrite(trig, HIGH);
delay(10);
digitalWrite(trig, LOW);

duration = pusleIn (echo, HIGH);
Serial.println(duration);
}