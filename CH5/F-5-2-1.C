#include<stdio.h>
#include<conio.h>
main()

{
	int a,b;
	clrscr();
	printf("enter value of A :");
	scanf("%d",&a);
	printf("enter value of B :");
	scanf("%d",&b);

	(a>b)
		? printf("A is big")
		: printf("B is big");

	getch();
}