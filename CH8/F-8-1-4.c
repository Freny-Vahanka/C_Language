#include<stdio.h>

/* WAP TO CALCULATE FACTORIAL F ALL ARRAY ELEMENTS FROM ID ARRAY*/

void main()
{
		int n,fact=1;
		printf("Enter length of array:");
		scanf("%d",&n);
		
		int a[n],i;
		
		for(i=0;i<n;i++)
		{
			printf("Enter a[%d]: ",i);
			scanf("%d",&a[i]);
		}
		for(i=1;i<n;i++)
		{
			fact= fact * a[i];
			printf("Factorial of array = %d\n",fact);
		}
		
}
