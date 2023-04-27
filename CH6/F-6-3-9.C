#include<stdio.h>
#include<conio.h>
main()

{
	int i,n,fact;
	clrscr();
	printf("Enter number to find factorial: ") ;
	scanf("%d",&n);

	for(i=1,fact=1;i<=n;i++)
	{
		fact *=i;

	}
	printf("factorial of %d numbers: %d",n,fact);
	getch();
}
