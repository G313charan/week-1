#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter a value in km:");
	scanf("%f,&a");
	
	b=a*1000;
	c=b*100;
	printf("=%f km\n",a);
	printf("=%f m\n",b);
	printf("= %f cm\n",c);
	return 0;
}
