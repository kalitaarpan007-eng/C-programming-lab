#include<stdio.h>

int main()
{
	int units;
	 printf("Enter units consumed \n");
	 scanf("%d",&units);
	 
	 //for units consumed <=100
	 if(units<=100)
	 {
	 	printf("Bill is %2f \n",1.5*units);
	 }
	 //for units consumed >100 & <=200
	 else if(units>100 && units <=200)
	 {
	 	printf("Bill is %2f \n", 1.5*100 + (units-100)*2);	
	 }
	 //for units more than 200 and less than equal to 300
	 else if(units>200 && units<=300)
	 {
	 	printf("Bill is %2f \n",1.5*100 + 2*100 + (units-200)*3);
	 }
	 else
	 {
	 	printf("Total bill is %2f \n",100*1.5 + 100*2 + 100*3 + (units-300)*5);
	 }
	 return 0;
	 
	 
	 }
