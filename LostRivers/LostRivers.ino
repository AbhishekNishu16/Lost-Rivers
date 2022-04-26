//Ultrasonic Sensor
int TRIG = 3;
int ECHO = 2;
int DURATION;
int DISTANCE;


void setup() { 
 
  // Ultrasonic Sensor
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);  

  //Serial Print
  Serial.begin (9600);

}

void loop() {
  digitalWrite(TRIG, HIGH);
  delay(10);
  digitalWrite(TRIG, LOW); 
  
  DURATION = pulseIn(ECHO, HIGH);
  DISTANCE = DURATION/58.2;

  if(DISTANCE >0)
  Serial.println(DISTANCE);
  delay(100);
 
}
