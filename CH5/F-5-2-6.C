#include<stdio.h>
#include<conio.h>

main()

{
	int a,b,c,d;
	clrscr();
	printf("enter value of A :");
	scanf("%d",&a);
	printf("enter value of B :");
	scanf("%d",&b);
	printf("enter value of C :");
	scanf("%d",&c);
	printf("enter value of D :");
	scanf("%d",&d);


	(a>b)
		? (a>c)
			?(a>d)
				? printf("A is big")
				: printf("D is big")

			:(c>d)
				? printf("C is big")
				: printf("D is big")
		:(b>c)
			?(b>d)
				? printf("B is big")
				: printf("D is big")
			:(c>d)
				? printf("C is big")
				: printf("D is big");


	getch();
}