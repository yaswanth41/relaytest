#define relay 2    //attaches the relay to pin 2

void setup()
{
  pinMode(relay, OUTPUT);    //sets the relay as an output
}
void loop()
{
  digitalWrite(relay, HIGH);    //relay open
  delay(2000);                  //wait 2 seconds
  digitalWrite(relay, LOW);     //relay closed
  delay(2000);                  //wait 2 seconds
}

//This program was created by y2iot group 
//Credit goes to yaswanthbalaramaraju.com and y2iot.blogspot.com 
//Members : Yaswanth(yb) , Mohanvamsi , Halder ,Rahulreddy
