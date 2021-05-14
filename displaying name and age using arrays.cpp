//A c program to compute age and name using fuunctions
#include<stdio.h>
#include<string.h>
void compute_name();
int compute_age();
int main()
{
	//declaring functions
	int age;
	char name[100]="Naha Fernand";
	age=compute_age();
	compute_name();
	printf("\nHello,");
	printf("\nMr %s Your age is %d",name,age);
    return 0;
}
//function for demanding users name
    compute_name()
{
	char name[13]="Naha Fernand";
	return "Naha Fernand";
}
//function for computer users age
    int compute_age()
{
	int year;
	printf("\nPlease Enter your year of birth:");
	scanf("%d",&year);
	return 2021-year;
}

