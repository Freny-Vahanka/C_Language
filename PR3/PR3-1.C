#include<stdio.h>
#include<conio.h>
void main()

{
	char ch ='a';
	clrscr();
	printf("Alphabets from a to z\n\n");

	do
	{
	printf("%c",ch);
	ch++;
	}
	while(ch<='z');
	getch();
}
