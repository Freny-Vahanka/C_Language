#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,s;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(s=1;s<=(5-i);s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=2;i<=5;i++)
	{
		for(s=2;s<=i;s++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}