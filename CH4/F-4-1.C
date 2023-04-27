#include<stdio.h>
#include<conio.h>

void main()
{
	float a,x,y;
	clrscr();
	printf("enter value of x: ");
	scanf("%f",&x);
	printf("enter value of y: ");
	scanf("%f",&y);

	a=(x*x)+(y*y)+(2*x*y);
	printf("Result=%0.2f",a);
	getch();

}