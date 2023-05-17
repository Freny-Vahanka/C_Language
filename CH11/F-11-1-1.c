#include<stdio.h>

void main()
{
	int a,squre;
	int *ptr;
	
	ptr =&a;
	
	printf("Enter a :");
	scanf("%d",ptr);
	
	*ptr +=1; 
	
	squre = a*a;
	printf("squre : %d",squre);
}
