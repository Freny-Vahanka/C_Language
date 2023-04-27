#include<stdio.h>
#include<conio.h>

void main()
{
	int length,width,area;
	clrscr();
	printf("Enter the Length of rectangle: ");
	scanf("%d",&length);
	printf("Enter the Width of rectangle: ");
	scanf("%d",&width);


	area= length*width;
	printf("The area of the given reactangle is %d",area);
	getch();
}