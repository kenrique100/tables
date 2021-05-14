//A c program to compute 6 letter words from a user and arrange them in alphabetical order
#include<stdio.h>
int main(){
	//Declaring variables 
	char A[50]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},temp;
	int i,j;
	//initialising variables
	printf("Enter the 6 letter string:");
	scanf("%s",&A[i]);
	if(A[i]>6){
		printf("Invalid input of letters");
	}
	else{
		printf("%s\n",A[i]);
	}
	return 0;
}
