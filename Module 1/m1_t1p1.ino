#define sensorPin 2
#define yellowLED 3

void setup()
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(yellowLED, OUTPUT);

  Serial.println("Motion Sensing");  
}

void loop()
{
  int sensorValue = digitalRead(sensorPin);
  
  
  if(sensorValue == HIGH){
    Serial.println("Motion Detected");
    
    digitalWrite(yellowLED, HIGH);
    delay(750);
  }
  
  else{
    Serial.println("No motion");
    digitalWrite(yellowLED, LOW);
    delay(750);
  }
  
}
