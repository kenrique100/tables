//A c programm to compute and display the multiplication and addition table for even or odd displays
#include<stdio.h>
char intro();
void body();
void compute(char ch);
int main()
{
	body();
	return 0;
}
void body()
{
	char p;
	p=intro();
	compute(p);
}
void compute(char ch)
{
	int num,count=1,result;
	switch(ch)
	{
        case '*':
        	printf("Enter a positive number:");
	        scanf("%d",&num);
		    if(num%2==0)
		    {
		    	for(count=1;count<=10;count++)
		    	if(count%2!=0)
				{
					continue;
				}
			else
			{
				printf("%d * %d = %d\n",num,count,num*count);
			}
		}
		else
		{
			for(int count=1;count<=10;count++)
			{
				if(count%2==0){continue;}
				else{  printf("%d * %d = %d\n",num,count,num*count);}
			}
		}
		
		  	break;
		case '+':
			printf("Enter a positive number:");
	        scanf("%d",&num);
		    if(num%2==0)
		    {
		    	for(count=1;count<=10;count++)
		    	if(count%2!=0)
				{
					continue;
				}
			else
			{
				printf("%d * %d = %d\n",num,count,num+count);
			}
		}
		else
		{
			for(int count=1;count<=10;count++)
			{
				if(count%2==0){continue;}
				else{printf("%d * %d = %d\n",num,count,num+count);}
		    }
		}
		break;
	default:
		printf("Invalid figure code\n");
	}
}
char intro()
{
	
	
	char ch;
	printf("---------------------------------------------\n");
	printf("1-Multiplication (*)\n");
	printf("2-Addition (+)\n");
	printf("---------------------------------------------\n");
	printf("Enter table code:");
	scanf("%c",&ch);
	return ch;
}
