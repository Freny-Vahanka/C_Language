#include<stdio.h>
#include<conio.h>
main()

{
	int i,n;
	clrscr();
	printf("Enter ending point: ") ;
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d",i);
		}

	}
	getch();
}
