#include<stdio.h>

/* WAP to find peform merging of 1D array & store it into another */

void main()
{
		int n,m;
		printf("Enter length of  A array:");
		scanf("%d",&n);
		printf("Enter length of  B array:");
		scanf("%d",&n);
		
		int a[n],i,c[n+m],b[n];
		
		for(i=0;i<n;i++)
		{
			printf("Enter a[%d]: ",i);
			scanf("%d",&a[i]);
		}
		printf("\n");
		
		for(i=0;i<n;i++)
		{
			printf("Enter b[%d]: ",i);
			scanf("%d",&b[i]);
		}
		printf("\n");
		
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
		printf("\n");
		
		for(i=0;i<m;i++)
		{
			printf("%d\n",a[i]);
		}
		for(i=0;i<n;i++)
		{
			c[i]=a[i];
		}
		for(i=n;i<n+m;i++)
		{
			c[i]=b[i-n];
		}
		printf("Merged Array: ",c[i]);
		
}
