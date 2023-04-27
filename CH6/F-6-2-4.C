#include<stdio.h>
#include<conio.h>
main()

{
	int i;
	clrscr();
	printf("Enter starting point: ") ;
	scanf("%d",&i);

	do
	{
		printf("%d",i);
		i--;
	}
	while(i>=1);
	getch();
}
