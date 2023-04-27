#include<stdio.h>
#include<conio.h>
void main()
{
      char i,j;
      clrscr();

      for(i=65;i<=69;i++)
      {
	for(j=i;j>=65;j--)
	{
		printf("%c",i);
	}
      printf("\n");
      }
      getch();
}


