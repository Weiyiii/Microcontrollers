int pinButton =8; 

int LED =2;

void setup(){	
Serial.begin(9600);
pinMode(pinButton, INPUT);
pinMode(LED,OUTPUT);

}

void loop(){	
int stateButton = digitalRead(pinButton);
if(stateButton == 1){
digitalWrite(LED, HIGH);	
}else{	
	digitalWrite(LED, LOW);
	}
}
