int led1=2;
int led2=3;
int led3=4;
int button=5;
int reading=0;
int B=0;
int counter=0;
void setup()
{
  pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,INPUT);
    
}
void loop()
{
  reading=digitalRead(button);
  if(reading!=B){
    if(reading==HIGH){
      
      counter++;}
  }
  
  B=reading;
  if(counter==1){
    digitalWrite(2,HIGH);}
    if(counter==2){
      digitalWrite(3,HIGH);}
      if(counter==3){
        digitalWrite(4,HIGH);}
        if(counter==4){
          digitalWrite(2,LOW);
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
           delay(250);
        }
 
      }
      