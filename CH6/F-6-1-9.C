#include<stdio.h>
#include<conio.h>
main()

{
	int i=1,n,fact=1;
	clrscr();
	printf("Enter number to find factorial: ") ;
	scanf("%d",&n);

	while(i<=n)
	{
		fact *=i;
		i++;
	}
	printf("factorial of %d numbers: %d",n,fact);
	getch();
}
