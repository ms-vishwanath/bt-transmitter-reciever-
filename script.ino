char data = 0;                
void setup() 
{
Serial.begin(9600);        
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);        
}
void loop()
{
if(Serial.available() > 0)  
{
data = Serial.read();      
Serial.print(data);        
Serial.print("\n");        
if(data == 'b')             
digitalWrite(2, HIGH);  
else if(data == 'a')     
digitalWrite(2, LOW); 

  if(data == 'd')             
digitalWrite(3, HIGH);  
else if(data == 'c')     
digitalWrite(3, LOW);

if(data == 'f')             
digitalWrite(4, HIGH);  
else if(data == 'e')     
digitalWrite(4, LOW);

if(data == 'h')             
digitalWrite(5, HIGH);  
else if(data == 'g')     
digitalWrite(5, LOW);
}                            

}
