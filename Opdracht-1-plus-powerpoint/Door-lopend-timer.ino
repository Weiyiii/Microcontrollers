int uni=0,dec=0,cen=0,umil=0;
unsigned char dato=0,dato2=0,rep=0;
void setup(){	
 	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(8,OUTPUT);
	pinMode(9,OUTPUT);
	pinMode(10,OUTPUT);
	pinMode(11,OUTPUT);
}

void deco(){		
	dato2=dato&01;
	if(dato2==1){ digitalWrite(4,HIGH);}
	else{ digitalWrite(4,LOW);
	}
	dato2=dato&02;
	if(dato2==2){ digitalWrite(5,HIGH);}
	else{ digitalWrite(5,LOW);
	}
	dato2=dato&04;
	if(dato2==4){ digitalWrite(6,HIGH);}
	else{ digitalWrite(6,LOW);
	}
	dato2=dato&08;
	if(dato2==8){ digitalWrite(7,HIGH);}
	else{ digitalWrite(7,LOW);
	}
}

void mostrar(){	
	dato=uni;
	deco();
	digitalWrite(8,LOW);
	delay(5);
	digitalWrite(8,HIGH);
	
	dato=dec;
	deco();
	digitalWrite(9,LOW);
	delay(5);
	digitalWrite(9,HIGH);
	
	dato=cen;
	deco();
	digitalWrite(10,LOW);
	delay(5);
	digitalWrite(10,HIGH);
	
	dato=umil;
	deco();
	digitalWrite(11,LOW);
	delay(5);
	digitalWrite(11,HIGH);
}

void loop()
{	
	for(rep=0;rep<50;rep++){														
	
	mostrar();
	}
	uni++;
	if(uni>9){ uni=0;dec++;}
	if(dec>9){ dec=0;cen++;}
	if(cen>9){ cen=0;umil++;}
	if(umil>9){ umil=0;}


}