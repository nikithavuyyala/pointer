/*program to find the sum of elements in an array*/
#include<stdio.h>

int main()
{	
int array[5]={24,54,74,85,95};
int *ptr=array;
int i,sum=0;
for(i=0;i<5;i++)
{
  sum=*ptr;
  ptr++;	
}
printf("sum of array elements is %d",sum);

return 0;
	
	
}
