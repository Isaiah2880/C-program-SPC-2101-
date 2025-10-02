/*
Name:ISAIAH OTIENO
Registration number:PA106/G/28801/25
Description:C program to prompt the user to enter mobile data bundle purchase option
*/

#include <stdio.h>

int main()
{
	
	int option;
	printf("Mobile data bundles:\n");
	printf("1.100 MB @ 50 KES\n" );
	printf("2.500 MB @ 200 KES\n");
	printf("3.1 GB @ 300 KES\n");
	printf("4.2 GB @ 600 KES\n");
	
	printf("choose a bundle option (1-4);");
	scanf("%d", &option);
		
		
	switch(option){
		
    case 1:printf("you have purchased 100 MB for 50 KES\n");
	break;


    case 2:printf("you have purchased 500 MB for 200 KES\n");
     break;
 
 
    case 3:printf("you have purchased 1 GB for 300 KES\n");
    break;


    case 4:printf("you have purchased 2 GB for 600 KES\n");
    break;

	
    default:printf("invalid option\n");
	}

	return 0;
}