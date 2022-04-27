
#define SENSE A7 

void setup()
{
pinMode(SENSE, INPUT);
pinMode(7, OUTPUT);
pinMode(2, OUTPUT);
pinMode(8, OUTPUT);
Serial.begin(9600);

}
void loop()
{
  int a,t=0;
  a=digitalRead(A7);
  Serial.println(a);
if(a==1)
{
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(2,LOW);
}
else
{

   while(a==0)
   { a=digitalRead(A7);
    digitalWrite(8,LOW);
    delay(100);
    t=t+1;
    Serial.print(t); 
    if(t>=30)
    digitalWrite(2,HIGH);
    if(t>=50)
    digitalWrite(7,HIGH);
   }
  
   }

   
  }
