#include<stdio.h>

int main()

{
	float strength1,strength2;
	
	printf("Enter the first strength \n");
	scanf("%f",&strength1);
	
	printf("Enter the second strength \n");
	scanf("%f",&strength2);
	
	if(strength1>strength2)
	{
		printf("%F has greater tensile strength \n",strength1);
	}
	else if(strength2>strength1)
	{
		printf("%f has greater tensile strength \n",strength2);
	}
	else
	{
		printf("both are same \n");
	}
}
