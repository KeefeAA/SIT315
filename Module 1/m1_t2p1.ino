#define sensorPin 2
#define yellowLED 3

uint8_t ledState = LOW;

void setup()
{
  Serial.begin(9600);
  
  pinMode(sensorPin, INPUT);  
  pinMode(yellowLED, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(sensorPin), toggle, FALLING);
  
}

void loop(){
	delay(500);
}

void toggle(){
  ledState = !ledState;
  digitalWrite(yellowLED, ledState);
  if(ledState == HIGH){
    Serial.println("LED ON");
  }
  else{
  	Serial.println("LED OFF");
  }
  	
}
