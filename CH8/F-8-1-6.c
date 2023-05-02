#include<stdio.h>

/* WAP to find average of 1D array */

void main()
{
		int n;
		printf("Enter length of array:");
		scanf("%d",&n);
		
		int a[n],i,count=0,sum=0,avg=0;
		
		for(i=0;i<n;i++)
		{
			printf("Enter a[%d]: ",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
			sum = sum +a[i];
			avg=sum/count;
			count++;
		}
		printf("The average of 1D Array : %d",avg);
}
