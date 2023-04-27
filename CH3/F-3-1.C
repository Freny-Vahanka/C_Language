#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,temp;
	clrscr();
	printf("Enter the value of x and y: ");
	scanf("%d%d",&x,&y);
	printf("Before swapping x=%d and y=%d\n",x,y);

	temp=x;
	x=y;
	y=temp;
	printf("After swapping x=%d and y=%d",x,y);
	getch();
}