//A c program to compute ad sort i ascending order
#include<stdio.h>
int main()
{
	int N=10,i,j,temp;
	int arr[N];
	printf("Enter  the number of the list \n");
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
	if(arr[j]>arr[i]){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	}
}
printf("sorted list\n");
for(i=0;i<N;i++){
	printf("%d\n",arr[i]);
}
return 0;
}
