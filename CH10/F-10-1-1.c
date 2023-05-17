#include<stdio.h>

void cube()
{
		
	int a,cube=0;
	
	printf("Enter a:");
	scanf("%d",&a);
	
	cube = a*a*a;
	
	printf("cube of %d is : %d",a,cube);
	
}

void main()
{
	
	cube();
}


