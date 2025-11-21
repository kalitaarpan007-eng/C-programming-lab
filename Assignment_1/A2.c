#include<stdio.h>

int main()
{
	int num1;
	printf("Enter the number \n");
	scanf("%d",&num1);
	
	if(num1>0)
	{
		printf("The number is positive",num1);
	}
	else if(num1<0)
	{
		printf("The number is negative",num1);
	}
	else
	{
		printf("The number is 0");
	}
	return 0;
}
