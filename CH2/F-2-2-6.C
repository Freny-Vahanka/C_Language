#include<stdio.h>
#include<conio.h>

void main()
{
	float pie = 3.14,perimeter,radius;

	clrscr();
	printf("Enter The Radius of Circle: ");
	scanf("%f",&radius);
	perimeter= 2*pie*radius;
	printf("The perimeter of the circle is %0.2f\n",perimeter);

	getch();
}