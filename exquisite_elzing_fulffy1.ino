 // C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int measuredNum = analogRead(A0);
  float measuredVolt = 0.00488758553 * measuredNum;
  Serial.println(measuredVolt);
}