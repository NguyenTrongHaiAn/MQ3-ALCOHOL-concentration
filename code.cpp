#define MQ3pin A0
const int BUZZER = 2;
const int DO = 8;
float sensorValue;  //variable to store sensor value
void setup() {
    Serial.begin(9600); // sets the serial port to 9600
    pinMode(BUZZER, OUTPUT);
    Serial.println("MQ3 warming up!");
    delay(20000); // allow the MQ3 to warm up
    pinMode(DO, INPUT);
}
void loop() {
    sensorValue = analogRead(MQ3pin); // read analog input pin 0
    Serial.print("Sensor Value: ");
    Serial.println(sensorValue);
     alarm = digitalRead(DO);
    if (alarm == 1) {
        digitalWrite(BUZZER, HIGH); // Bật còi báo động
    } else {
        digitalWrite(BUZZER, LOW); // Tắt còi báo động
    }
    delay(2000); // wait 2s for next reading
}
