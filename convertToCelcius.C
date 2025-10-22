/*
Name:ISAIAH OTIENO
Registration number:PA106/G/28801/25
Description:Function that converts farenheit to celsius
*/

#include <stdio.h>
//function protptype
float convertToCelsius(float farenheit){
	return(farenheit - 32) * 5.0 / 9.0;
	
}

int main()
{
	//function declaration templete
	float farenheit;
	printf("Enter temperature in farenheit:");
	scanf("%f", &farenheit);
	
	
	printf("Temperature in celsius = %.2f degree Celcius\n",convertToCelsius(farenheit));
	return 0;
}