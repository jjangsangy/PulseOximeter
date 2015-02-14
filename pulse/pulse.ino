
// Declare Pins
int digital_pin = D0;
int analog_pin = A0;
int test_pin = D1;
int delay_time = 31;
int isRed;
int redIntensity;
int infraredIntensity;

// This routine runs only once upon reset
void setup()
{
    
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  // Set Spark Variables
  Spark.variable("isRed", &isRed, INT);
  Spark.variable("redIntensity", &redIntensity, INT);
  Spark.variable("infraredIntensity", &infraredIntensity, INT);
  
  // Set analog and digital pins as inputs
  pinMode(digital_pin, INPUT);
  pinMode(analog_pin, INPUT);
  pinMode(test_pin, OUTPUT);
}

// This routine loops forever
void loop()
{

  digitalWrite(test_pin, HIGH);
  
  if (digitalRead(digital_pin)) {
      
    isRed = 1;
  }
  else {
    isRed = 0;
  }
    
  if (isRed == 1)
    redIntensity = analogRead(A0);
  else
    infraredIntensity = analogRead(A0);

  delay(delay_time);

  digitalWrite(test_pin,LOW);
  

}

