#include<stdio.h>

/* 10.WAP to print & find sum of all boundary elements of 5X5 array.*/

void main()
{
	int r,c;
	printf("Enter number of row\t:");
	scanf("%d",&r);
	printf("Enter number of column\t:");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j,sum=0;
	
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
	for(i=0; i<r; i++)
	{
      for(j=0; j<c; j++)
	  {
        if(i==0 || j==0 || i==r-1 || j==c-1)
		 {
			printf("%d ",a[i][j]);
        	sum = sum + a[i][j];
         }
         else
         {
		  	printf(" ");
         }
      } printf("\n");
   }
   printf("Sum of boundary is %d", sum);
}
