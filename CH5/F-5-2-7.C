#include<stdio.h>
#include<conio.h>

main()

{
	int a,b,c,d,e;
	clrscr();
	printf("enter value of A :");
	scanf("%d",&a);
	printf("enter value of B :");
	scanf("%d",&b);
	printf("enter value of C :");
	scanf("%d",&c);
	printf("enter value of D :");
	scanf("%d",&d);
	printf("enter value of E :");
	scanf("%d",&e);


	(a>b)
		? (a>c)
			?(a>d)
				?(a>e)
					? printf("A is big")
					: printf("E is big")
				:(d>e)
					? printf("D is big")
					: printf("E is big")


			:(c>d)
				?(c>e)
					? printf("C is big")
					: printf("E is big")
				:(d>e)
					? printf("D is big")
					: printf("E is big")

		:(b>c)
			?(b>d)
				?(b>e)
					? printf("B is big")
					: printf("E is big")
				:(d>e)
					? printf("D is big")
					: printf("E is big")
			:(c>d)
				?(c>e)
					? printf("C is big")
					: printf("E is big")
				:(d>e)
					? printf("D is big")
					: printf("E is big");



	getch();
}