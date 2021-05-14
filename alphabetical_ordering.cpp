//A c program to compute 6 letter words from a user and arrange them in alphabetical order
#include<stdio.h>
#define MAX 6
int main(){
	//Declaring variables 
	char A[50]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},temp;
	int i,j;
	printf("Enter the 6 letter string:");
	scanf("%s",&A[i]);
	for(i=0;A[i];i++)
	
	{
		for(j=i+1;A[j];j++)
		{
			if(A[j]<A[i])
			{
				temp=A[j];
				A[j]=A[i];
				A[i]=temp;
			}
		}
	}
	{
	printf("%s\n",A);
		return 0;
	}
}
