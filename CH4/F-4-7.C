#include<stdio.h>
#include<conio.h>

void main()
{
	float a,x,y,z;
	clrscr();
	printf("enter value of x: ");
	scanf("%f",&x);
	printf("enter value of y: ");
	scanf("%f",&y);
	printf("enter value of z: ");
	scanf("%f",&z);


	a=(x*x)+(y*y)+(z*z)+(2*x*y)+(2*y*z)+(2*x*z);
	printf("Result=%0.2f",a);
	getch();

}