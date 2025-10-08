/*
Name:ISAIAH OTIENO
Registraton number:PA106/G/28801/25
Description:C Programme implementing a number guessing game 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int secret, guess, attempts = 0;
	
	srand(time(0));
	secret = rand() % 20 + 1;
	
	while(1)
	{
	printf("Enter your guess (1-20):");	
	scanf("%d",&guess);
	attempts++;
	
	if (guess > secret){
	printf("Too high!\n");
	}
	else if(guess < secret){
		printf("Too low!\n");
	}
	else{
		printf("Congratulations! You guessed the number in % attempts.\n",attempts);
		break;
	}

	}

	
	return 0;
}