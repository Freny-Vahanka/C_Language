#include<stdio.h>
#include<conio.h>

void main()
{
	int num,sum=0,firstdigit,lastdigit;
	clrscr();
	printf("Enter any number to find sum of first and last digit: ");
	scanf("%d",&num);

	lastdigit = num%10;
	firstdigit = num;

	while(num>=10)
	{
		num=num/10;
	}

	firstdigit=num;
	sum= firstdigit + lastdigit;
	printf("Sum of first and last digit: %d",sum);
	getch();
}


