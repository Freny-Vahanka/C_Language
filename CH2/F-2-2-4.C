#include<stdio.h>
#include<conio.h>

void main()
{
	int base,height,area;
	clrscr();
	printf("Enter the base of triangle: ");
	scanf("%d",&base);
	printf("Enter the height of triangle: ");
	scanf("%d",&height);


	area= (base*height)/2;
	printf("The area of the given triangle is %d",area);
	getch();
}