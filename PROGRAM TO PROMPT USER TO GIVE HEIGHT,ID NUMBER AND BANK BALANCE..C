/*
Name:ISAIAH OTIENO
Registration number:PA106/G/28801/25
Description:C program to prompt the user and display my height ,ID number,Bank balance
*/
#include<stdio.h>

int main () 
{
	
	//user variables to be entered
    float height;
    int IDnumber;
    double bankBalance;
    
    //Prompt and display;
    printf("Enter your height:");
	scanf("%f",& height);
	
	printf("Enter your IDnumber:");
	scanf("%d",&IDnumber);
	
	printf("bankBalance:");
	scanf("%If",&bankBalance);
	
	//Display back these information to the user
	printf("Your height: %.2f\n",height);
	printf("Your IDnumber:%d\n",IDnumber);
	printf("Your bankBalance:ksh%if\n",bankBalance);
	
	return 0;
}
	
		
	