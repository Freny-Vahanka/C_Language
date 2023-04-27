#include<stdio.h>
#include<conio.h>
void main()

{
	int i,j,s;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(s=4;s>=(5-i);s--)
		{
			printf(" ");
		}
			for(j=5;j>=i;j--)
			{
				printf("%d",j);
			}
		printf("\n");
	}
	getch();
}



