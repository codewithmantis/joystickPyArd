
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = A0; // analog pin connected to X output
const int Y_pin = A1; // analog pin connected to Y output

void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

void loop() {
//  Serial.print(digitalRead(SW_pin));
  // Read the joystick values
  int xValue = analogRead(X_pin);
  int yValue = analogRead(Y_pin);
  
  // Send the values to Serial
  Serial.print(xValue);
  Serial.print(",");
  Serial.println(digitalRead(SW_pin));
  
  
  delay(30); 
}