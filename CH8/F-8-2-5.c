#include<stdio.h>

/* 5.WAP to perform row-wise sum of 2D array.*/

void main()
{
	int r,c;
	printf("Enter number of row\t:");
	scanf("%d",&r);
	printf("Enter number of column\t:");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j,rsum=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==0)
			{
				printf("%d ",a[i][j]);
				rsum=rsum+a[i][j];
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
			printf("\nSum of all the elements in row is %d\n",rsum);
		}
	}
}
