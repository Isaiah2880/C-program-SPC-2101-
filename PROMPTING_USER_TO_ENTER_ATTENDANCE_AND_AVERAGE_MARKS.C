/*
Name:ISAIAH OTIENO
Registration number:PA106/G/28801/25
Description:C program to check for final exams eligibility
*/

#include <stdio.h>

int main()
{
	float attendance;
	float marks;
	
	
	//prompt the user to enter attendance
	printf("Enter attendance :");
	scanf("%f", &attendance);
	
	
	//prompt the user to enter marks
	printf("Enter average marks:");
	scanf("%f", &marks);
	
	
	if(attendance >=75 &&marks >=40){
	printf("Eligible for final exams\n");	
	}
	else
	{
	printf("Not eligible for final exams\n");	
	}	
	return 0;
}
