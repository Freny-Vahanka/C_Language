#include<stdio.h>
#include<conio.h>
main()

{
	int i=1,n;
	clrscr();
	printf("Enter number to multiply: ") ;
	scanf("%d",&n);

	do
	{

		printf("%d %d %d\n",n,i,n*i);
		i++;
	}
	while(i<=10);
	getch();
}
