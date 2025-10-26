#include<stdio.h>

int main()
{
	float temperature;
	
	printf("Enter the temperature \n");
	scanf("%f",&temperature);
	
	if(60<temperature && temperature<=80)
	{
		printf("Safe \n");
	}
	else
	{
		printf("Warning \n");
	}
	return 0;
	
}
