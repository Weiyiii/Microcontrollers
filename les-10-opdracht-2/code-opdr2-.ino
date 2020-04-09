void setup()
{
	for (int i  = 3; i <= 8; i++)
		pinMode(i, OUTPUT);
	
}

void loop()
{
	// display a new digit every second
	for (int digit = 0; digit <= 9; digit++)
	{
		for (int pin = 4; pin <= 7; pin++)
			digitalWrite(pin, (bool)(digit & (1 << pin - 4)));
		delay(1000);
	}
}  