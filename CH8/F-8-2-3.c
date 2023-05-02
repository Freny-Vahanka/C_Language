#include<stdio.h>

/* 3.WAP to find average of 2D array.*/

void main()
{
	int r,c;
	printf("Enter number of row\t:");
	scanf("%d",&r);
	printf("Enter number of column\t:");
	scanf("%d",&c);
	
	int count=0,sum=0,avg=0;
	
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
			sum = sum + a[i][j];
			count++;
			avg = sum / count;
			
		}
		printf("\n");
	}
	printf("The length of the 2-D Array: %d\n ",count);
	printf("The sum of the 2-D Array: %d\n ",sum);
	printf("The average of the 2-D Array: %d\n ",avg);
}
