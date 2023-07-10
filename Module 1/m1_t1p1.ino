#define sensorPin 2
#define ledBuiltIn 3

void setup()
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(ledBuiltIn, OUTPUT);

  Serial.println("Motion Sensing");  
}

void loop()
{
  int sensorValue = digitalRead(sensorPin);
  
  
  if(sensorValue == HIGH){
    Serial.println("Motion Detected");
    
    digitalWrite(ledBuiltIn, HIGH);
    delay(750);
  }
  
  else{
    Serial.println("No motion");
    digitalWrite(ledBuiltIn, LOW);
    delay(750);
  }
  
}
