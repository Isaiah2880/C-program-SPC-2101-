/*
Name:ISAIAH OTIENO
PA106/G/28801/25
Description:C Program for a password system that requires the user to enter the correct password to log in
*/
#include <stdio.h>
 
 int main()
 {
	 int password;//Declare to store the entered password
	 do{
		 
		 printf("Enter password:");
		 scanf("%d",&password);
		 
		 if(password != 1234){//Check if the entered password is NOT correct
			 printf("Incorrect password.\n");
		 }
		 
	 }while(password != 1234);//Repeat loop while password is not 1234
	 printf("Access granted.\n");
	 
		 
	 return 0;
 }



