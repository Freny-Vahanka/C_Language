#include<stdio.h>

/* 2.WAP to find length of 2D array.*/

void main()
{
	int r,c,count;
	printf("Enter number of row\t:");
	scanf("%d",&r);
	printf("Enter number of column\t:");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j;
	
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
			count++;
		}
		printf("\n");
	}
	printf("The length of the 2-D Array: %d ",count);
}
