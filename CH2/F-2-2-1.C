#include<stdio.h>
#include<conio.h>

void main()
{
	float pie = 3.14;
	int radius;
	clrscr();
	printf("Enter The Radius of Circle: ");
	scanf("%d",&radius);
	printf("The radius of the circle is %d\n",radius);
	float area=(float)(pie*radius*radius);
	printf("The area of the given circle is %0.2f",area);
	getch();
}