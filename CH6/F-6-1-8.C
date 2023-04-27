#include<stdio.h>
#include<conio.h>
main()

{
	int i=1,n,sum=0;
	clrscr();
	printf("Enter number to add: ") ;
	scanf("%d",&n);

	while(i<=n)
	{
		sum = sum+i;
		i++;
	}
	printf("sum of %d numbers: %d",n,sum);
	getch();
}
