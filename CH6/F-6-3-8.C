#include<stdio.h>
#include<conio.h>
main()

{
	int i,n,sum;
	clrscr();
	printf("Enter number to add: ") ;
	scanf("%d",&n);

	for(i=1,sum=0;i<=n;i++)
	{
		sum = sum+i;

	}
	printf("sum of %d numbers: %d",n,sum);
	getch();
}
