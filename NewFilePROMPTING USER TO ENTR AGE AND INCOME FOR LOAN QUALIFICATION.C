/*
Name:ISAIAH OTIENO
Registration number:PA106/G/28801/25
Description:Program to prompt the user to enter age and income for a loan offer
*/
#include <stdio.h>
int main()
{

	int age;
	float income;
	
	//Prompt the user to enter age
	printf("Enter your age:");
	scanf("%d",&age);
	
	//Prompt the user to enter income
	printf("Enter your income:");
	scanf("%f",&income);	
	
	//Check requirements to qualify
	if(age>=21&&income>=21000){
		printf("congratulations you qualify for a loan\n");
}else
{

	
		printf("unfortunaly,we are unable to offer you a loan at this time\n");
		
}	
	return 0;
}
