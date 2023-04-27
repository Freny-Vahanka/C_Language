#include<stdio.h>
#include<conio.h>


void main()
{
	int a;
	clrscr();
	printf("Enter your marks: ");
	scanf("%d",&a);

	if(a>=90 && a<=100)
	{
		printf("Your Grade is A1");
	}
	else if(a>=80 && a<=89)
	{
		printf("Your Grade is A2");
	}
	else if(a>=70 && a<=79)
	{
		printf("Your Grade is B1");
	}
	else if(a>=60 && a<=69)
	{
		printf("Your Grade is B2");
	}
	else if(a>=34 && a<=49)
	{
		printf("Your Grade is C");
	}
	else if(a>=35 && a<=0)
	{
		printf("You Failed the Examination!!");
	}
	else
	{
		printf("invalid");

	}
	getch();
}