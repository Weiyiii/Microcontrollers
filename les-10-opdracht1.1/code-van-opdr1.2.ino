int led1 = 0;
 
int led2 = 1;
 
int led3 = 2;
 
int led4 = 3;
 
int Button = 4;
 
int buttonState = 0;
 
 
 
void setup() {
 
  
 
  pinMode(led1, OUTPUT);
 
  pinMode(led2, OUTPUT);
 
  pinMode(led3, OUTPUT);
 
  pinMode(led4, OUTPUT);
 
  
 
}
 
 
 
void loop() { buttonState = digitalRead(Button);
 
  if (buttonState ==1){
 
    digitalWrite(led1, HIGH);   
 
    delay(2000);                      
 
    digitalWrite(led1, HIGH);    
 
    digitalWrite(led2, HIGH);    
 
    delay(2000);
 
    digitalWrite(led1, HIGH);                       
 
    digitalWrite(led2, HIGH);     
 
    digitalWrite(led3, HIGH);     
 
    delay(2000);
 
    digitalWrite(led1, HIGH);                       
 
    digitalWrite(led2, HIGH);                      
 
    digitalWrite(led3, HIGH);      
 
    digitalWrite(led4, HIGH);     
 
    delay(2000); 
 
    digitalWrite(led1, LOW);                       
 
    digitalWrite(led2, LOW);                      
 
    digitalWrite(led3, LOW);                     
 
    digitalWrite(led4, LOW);      
 
  }
 
}