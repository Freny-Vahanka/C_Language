#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int a,b,c;
	clrscr();
	P("Enter a,b,&c : ");
	scanf("%d%d%d",&a,&b,&c);

	if(a<b)
	{
		if(a<c)
		{
			P("a is small");
		}
		else
		{
			P("c is small");
		}
	}
	else
	{
		if(b<c)
		{
			P("b is small");
		}
		else
		{
			P("c is small");
		}

	}
	getch();
}