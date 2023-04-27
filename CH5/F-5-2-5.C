#include<stdio.h>
#include<conio.h>

main()

{
	int a,b,c;
	clrscr();
	printf("enter value of A :");
	scanf("%d",&a);
	printf("enter value of B :");
	scanf("%d",&b);
	printf("enter value of C :");
	scanf("%d",&c);

	(a>b)
		? (a>c)
			? printf("A is big")
			: printf("C is big")
		:(b>c)
			? printf("B is big")
			: printf("C is big");


	getch();
}