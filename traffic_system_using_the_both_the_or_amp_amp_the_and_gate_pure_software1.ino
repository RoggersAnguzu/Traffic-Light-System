// C++ code
//
void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
  //LEFT PART.
  int Right =digitalRead(3);
  int Pedestrian =digitalRead(4);
  int piezo =analogRead(11);
  int Left =digitalRead(2);
  if(Left==0 && Pedestrian==1)
  {
  digitalWrite(5,HIGH);
  analogWrite(11,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  }
  else if(Left==0 && Pedestrian==0)
  {
  digitalWrite(5,HIGH);
  analogWrite(11,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  }
 
  else if(Left ==1 && Pedestrian ==0)
  {
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(5,LOW);
  analogWrite(11,LOW);
  }
   else if(Left==1 && Pedestrian==1) 
  {
   digitalWrite(5,LOW);
   analogWrite(11,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
  }
  //RIGHT PART.
  if(Right==0 && Pedestrian==1)
  {
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  analogWrite(11,HIGH);
  }
  else if(Right==0 && Pedestrian==0)
  {
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  analogWrite(11,HIGH);
  }
 
  else if(Right ==1 && Pedestrian ==0)
  {
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(5,LOW);
  }
   else if(Right==1 && Pedestrian==1) 
  {
   digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
  }
  
  
}