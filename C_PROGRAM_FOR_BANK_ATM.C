/*
Name:ISAIAH OTIENO
Registration number:PA106/G/28801/25
Description:C Program for bank ATM that allows withdrawal as long as the account balance is greater than 0
*/

#include <stdio.h>
int main(){

    float balance,withdraw;

    printf("Enter your initial balance:");
    scanf("%f", &balance);

while( balance > 0)
{
	
	printf("Enter amount to withdraw");
    scanf("%f", &withdraw);
    balance = balance - withdraw;
    
    if(balance > 0)
    	printf("Remaining balance:%.2f\n",balance);
        
    
    else
    	printf("Balance is zero or negative.Transaction stopped.\n");
}
	
	return 0;
}
