int led1 = D6;

void dot()
    {
        digitalWrite(led1, HIGH);
	    delay(500);
	    
	    digitalWrite(led1, LOW); 
	    delay(500);
	    
    }
    
void dash()
    {
        digitalWrite(led1, HIGH);
	    delay(2000);
	    
	    digitalWrite(led1, LOW); 
	    delay(500);
	    
    }

void setup() 
    {

	pinMode(led1, OUTPUT);

    }

void loop() {
    
	// D
	dash();
	dot();
	dot();
	
	delay(1000);
	
	//-----------------------
    
	// A 
	dot();
	dash();
	
	delay(1000);
	
	//-----------------------
	
	// N
	dash();
	dot();
	
	delay(1000);
	
	//-----------------------
	
	// I
	dot();
	dot();
	
	delay(1000);
	
	//-----------------------
	
	// E
	dot();
	
	delay(1000);
	
	//-----------------------
	
	// L
	dot();
	dash();
	dot();
	dot();
	
	delay(5000);
	
	// End
}
