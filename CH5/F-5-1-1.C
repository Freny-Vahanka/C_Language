#include<stdio.h>
#include<conio.h>


void main()
{
	int a;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&a);

	if(a>0)
	{
		printf("%d is a positive number");
	}
	else if(a<0)
	{
		printf("%d is a negative number");
	}
	else if(a=='0')
	{
		printf("%d is neutral");
	}

	else
	{
		printf("invalid");
	}
	getch();
}