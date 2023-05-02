#include<stdio.h>

/* WAP TO PRINT ONLY EVEN NUMBERS FROM 1D ARRAY*/

void main()
   	{
		int n;
		printf("Enter length of array:");
		scanf("%d",&n);
		
		int a[n],i;
		
		for(i=0;i<n;i++)
		{
			printf("Enter a[%d]: ",i);
			scanf("%d",&a[i]);
		}
		printf("Even numbers in the array are:");
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				printf("%d,",a[i]);
			}
		}
	}
		

