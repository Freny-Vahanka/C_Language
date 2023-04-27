#include<stdio.h>
#include<conio.h>

void main()
{
	int side,area;
	clrscr();
	printf("Enter the Length of side: ");
	scanf("%d",&side);

	area= side*side;
	printf("The area of the given square is %d",area);
	getch();
}