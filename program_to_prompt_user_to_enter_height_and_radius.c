/*
Name:ISAIAH OTIENO
Registration number:PA106/G/28801/25
Description:C program to find the volume and surface area a cylinder
*/

#include <stdio.h>
#define pi 3.14


int main()
{

	double radius;
	double height;
	double volume;
	double surfacearea;
	
	//Prompt the user to enter the following
	printf("Enter the radius:");
	scanf("%lf",&radius);
	
	printf("Enter the height:");
	scanf("%lf",&height);
	
	//Find volume and surface area using these formulae
	volume =  pi * radius  *  height;
	
	surfacearea = 2 * pi  * radius  *  radius  + 2 * pi * radius * height;
	
	//Give out volume and surface area
	printf("\nThese are the answers:\n");
	printf("volume of the cylinder=%lf\n",volume);
	printf("surfacearea of the cylinder=%lf\n",surfacearea);
	
	return 0;

}
