#include<stdio.h>

int main()

{
	float a,b,force;
	printf("The mass is in kg \n");
	scanf("%f",&a);
	printf("The acceleration is in m/s \n");
	scanf("%f",&b);
	
	force=a*b;
	printf("The force is in N %f \n",force);
	return 0;
}

