int water; //random variable 
void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT); //output pin for relay board, this will sent signal to the relay
  pinMode(6,INPUT); //input pin coming from soil sensor
}

void loop() { 
  water = digitalRead(6);  // reading the coming signal from the soil sensor
  if(water == HIGH) // if water level is full then cut the relay 
  {
  digitalWrite(3,LOW); // low is to cut the relay
  Serial.println("Low");
  }
  else
  {
  digitalWrite(3,HIGH); //high to continue proving signal and water supply
  Serial.println("High");
  }
  delay(400); 
}