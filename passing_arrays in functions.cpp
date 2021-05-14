// A c program that takes N number letters from user and pass them through the function while returnin g the function
#include<stdio.h>
#include<conio.h>
int smallest(int A[],int k,int n);
void sort(int A[],int n);
int main()
{
	char A[55]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},i,j,k;
     int n;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("\n Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
	printf("\n A[%d] = ",i);
	scanf("%d",&A[i]);
    };
    sort(A,n),pos;
    printf("\nThe sorted array is:");
    for(i=0;i<n;i++)
    printf("%d",A[i]);
    getch();
}
    int smallest(int A[],int k,int n)//smallest function
    {
    	int pos=k,small=A[k],i;
    	for(i=k;i<n;i++){
    		if(A[i]<small){
    			small=A[i];
    			pos=i;
			}
		}
		return pos;
	}
	void sort(int A[],int n)//sorting function
	{
		int k,pod,temp;
		for(k=0;k<n;k++){
			pos=smallest(A,k,n);
			temp=A[k];
			A[k]=A[pos];
			A[pos]=temp;
		}
	}

