#include<stdio.h>
#include<conio.h>
main()

{
	int i=1,n;
	clrscr();
	printf("Enter ending point: ") ;
	scanf("%d",&n);

	do
	{
		printf("%d",i);
		i++;
	}
	while(i<=n);
	getch();
}
