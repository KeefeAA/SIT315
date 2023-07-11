//Pins
const uint8_t sensorPin = 2;
const uint8_t ledPin = 5;
const uint8_t buttonPin = 3;

uint8_t ledState = LOW;

void setup(){
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(sensorPin, INPUT);  
  pinMode(ledPin, OUTPUT);
  
  attachInterrupt(digitalPinToInterrupt(sensorPin), toggleMotion, FALLING);
  attachInterrupt(digitalPinToInterrupt(buttonPin), toggleButton, FALLING);
}

void loop(){ 
  delay(500);
}

void toggleMotion(){
  ledState = !ledState;
  digitalWrite(ledPin, ledState);
  if(ledState == HIGH){
    Serial.println("Motion: LED ON");
  }
  else{
  	Serial.println("Motion: LED OFF");
  }
  
}


void toggleButton(){
  ledState = !ledState;
  digitalWrite(ledPin, ledState);
  if(ledState == HIGH){
    Serial.println("Button: LED ON");
  }
  else{
    Serial.println("Button: LED OFF");
  }
}