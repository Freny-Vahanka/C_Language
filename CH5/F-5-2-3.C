#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int a,b,c,d;
	clrscr();
	P("Enter a,b,c & d : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				P("a is big");
			}
			else
			{
				P("d is big");
			}
		}
		else
		{
			if(c>d)
			{
				P("c is big");
			}
			else
			{
				P("d is big");
			}
		}
	 }
	 else
	 {
		if(b>c)
		{
			if(b>d)
			{
				P("b is big");
			}
			else
			{
				P("d is big");
			}
		}
		else
		{
			if(c>d)
			{
				P("c is big");
			}
			else
			{
				P("d is big");
			}
		}
	 }
	 getch();
}


































