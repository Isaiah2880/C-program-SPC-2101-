/*
Name:ISAIAH OTIENO
Registration number:PA106/G/28801/25
Description:Function to calculate fare
*/

#include <stdio.h>

//function prototype
float calculateFare(float distance){
	float rate = 50;//KES per kilometer
	return distance * rate;

}
int main()
{
	//function declaration templete
	float distance;
	
	printf("Enter distance (in km):");
	scanf("%f", &distance);
	
	printf("Total Fare = KES. %.2f\n",
	calculateFare(distance));
	return 0;
}