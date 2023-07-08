// C++ code
//
int sensorState = 0;

#define SENSOR_PIN 2
#define LED_BUILTIN 3

void setup()
{
  Serial.begin(9600);
  
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);
  Serial.println("Motion Sensing");  
}

void loop()
{
  int sensorValue = digitalRead(SENSOR_PIN);
  
  
  if(sensorValue == HIGH){
    Serial.println("Motion Detected");
    
    digitalWrite(LED_BUILTIN, HIGH);
    delay(750);
  }
  
  else{
    Serial.println("No motion");
    digitalWrite(LED_BUILTIN, LOW);
    delay(750);
  }
  
}