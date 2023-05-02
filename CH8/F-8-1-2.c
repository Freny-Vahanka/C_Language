#include<stdio.h>

/* WAP TO PRINT SUM OF ALL ARRAY ELEMENTS*/

void main()
{
		int n,sum=0;
		printf("Enter length of array:");
		scanf("%d",&n);
		
		int a[n],i;
		
		for(i=0;i<n;i++)
		{
			printf("Enter a[%d]: ",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			sum = sum + a[i];
		}
		printf("Sum of array = %d\n",sum);
}
