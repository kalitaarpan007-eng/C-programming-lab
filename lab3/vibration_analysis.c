#include<stdio.h>

int main()
{
	float vib_amp,frequency;
	
	printf("enter the vibration amplitude in mm \n");
	scanf("%f",&vib_amp);
	printf("enter the frequency in Hz \n");
	scanf("%f",&frequency);
	if(vib_amp>0.5 && (frequency>=20 && frequency<=50))
	{
		printf("HIGH RISK!!! \n");
	}
	else if(vib_amp>0.5 || frequency>60)
	{
		printf("MEDIUM RISK!! \n");
	}
	else
	{
		printf("LOW RISK! \n");
	}
	return 0;
}
