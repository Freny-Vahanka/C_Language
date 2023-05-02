#include<stdio.h>

/* WAP TO CREATE AND PRINT N OF 1D ARRAY*/

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
		for(i=0;i<n;i++)
		{
			printf("a[%d]:%d\n",i,a[i]);
		}
		
}
