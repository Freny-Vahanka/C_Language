#include<stdio.h>

/* 4.WAP to find peform addition of 2D array & store it into another.*/

void main()
{
	int r,c;
	printf("Enter number of row\t:");
	scanf("%d",&r);
	printf("Enter number of column\t:");
	scanf("%d",&c);
	
	
	
	int a[r][c],b[r][c],s[r][c];
	int i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
			printf("\t");

		for(j=0;j<c;j++)
		{
			{
				printf("%d ",b[i][j]);
			}
				
		}
		printf("\t");
			for(j=0;j<c;j++)
		{
			s[r][c] = a[i][j] + b[i][j];
			printf("%d ",s[r][c]);
			
		}
		printf("\n");
	}
}
