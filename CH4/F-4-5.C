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


	a=(x*x*x)+(y*y*y)+(z*z*z)+(3*x*x*y)+(3*x*x*z)+(3*x*y*y)+(3*y*y*z)+(3*x*z*z)+(3*y*z*z)+(6*x*y*z);
	printf("Result=%0.2f",a);
	getch();

}