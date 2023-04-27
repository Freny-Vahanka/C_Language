#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int b;
	clrscr();
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);

	if(a>b)
	{
		printf("%d is a greater digit",a);
	}
	else if(b>a)
	{
		printf("%d is a greater digit",b);
	}
	else if(a==b)
	{
		printf("Both are equal");
	}

	else
	{
		printf("invalid");
	}
	getch();
}