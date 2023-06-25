int sensorPin = A0;
int sensorValue;
int limit = 834
void setup () {
// put your setup code here, to run once:
Serial.begin (9600) ;
pinMode (12, OUTPUT) :
void loop () {
// put your main code here, to run repeatedly:
sensorValue = analogRead (sensorPin) ;
Serial.println ("Analog Value of moisture: ");
Serial.println (sensorValue);
if (sensorValue>limit) {
serial.println("ON"):
digitalWrite (12, HIGH);
}
else {
Serial.printin ("OFF");
digitalWrite (12, LOW);
}
delay (1000);
}
