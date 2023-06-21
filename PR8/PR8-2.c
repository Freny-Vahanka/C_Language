#include<stdio.h>

void main()
{
	int arr[10],n,i;

	int *ptr=arr;

	printf("Enter the number of elements : ");
	scanf("%d",&n);
	
	printf("\nEnter %d Elements:",n);
	
		for (i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			
		}
			
		for (i=0;i<n;i++)
		{
			printf("a[%d] = %d",i,n);
			printf("%d\n",*(ptr+i));
		}
			

}
