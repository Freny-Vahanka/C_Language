#include<stdio.h>
#include<conio.h>

void main()
{
	int p,t,r,int_amt;
	clrscr();
	printf("Input principle,rateof interest & time to find simple interest: \n");
	scanf("%d%d%d",&p,&r,&t);

	int_amt =(p*r*t)/100;
	printf("Simple Interest= %d",int_amt);
	getch();
}