//A c programm to compute a return arrays min and postion using functions
#include<stdio.h>
    int *arraymin(int a[],int size);
    int main(){
	int a[]={5,6,1,0,10,3};
    int *b=arraymin(a,6);
    printf("The min is %d at at the position %d",*b,*(b+1));
    return 0;
}
    int *arraymin(int a[],int size)
	{
	int min=a[0],pos=0,minimum[2];
	for(int i=0;i=size;i++){
	if(min>a[i]){
		min=a[i];
		pos=i;
		minimum[0]=min;
		minimum[1]=pos;
	}
}
      return minimum;
  }
