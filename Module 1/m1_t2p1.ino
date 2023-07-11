#define sensorPin 2
#define yellowLED 3

uint8_t ledState = LOW;

void setup()
{
  Serial.begin(9600);
  
  pinMode(sensorPin, INPUT);  
  pinMode(yellowLED, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(sensorPin), toggle, FALLING);
  
  Serial.println("Motion Sensing");  
}

void loop(){
	delay(500);
}

void toggle(){
	ledState = !ledState;
	digitalWrite(yellowLED, ledState);
}
