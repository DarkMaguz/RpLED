/*
 ============================================================================
 Name        : RpLED.cpp
 Author      : me
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>

using namespace std;

#include <unistd.h>

#include "RaspPiGPIO.h"

int main( int argc, char **argv )
{
	
	RaspPiGPIO gpio;
	
	gpio.SetAsOutput( 17 );
	
	gpio.SetHigh( 17 );
	
	sleep( 1 );
	
	gpio.SetLow( 17 );
		
	return 0;
	
}
