#include<stdio.h>

void togglecase()
{
	char a[20];
	int *ptr;
	
	ptr =&a;
	printf("Enter  single character  :");
	scanf("%s",&a);
	
		
		int i;
		
		for(i=0;i<20;i++)
		{
			if(a[i]>=65 && a[i]<=90)
			{
				a[i] += 32;
			}
			else if(a[i]>=97 && a[i]<=122)
			{
				a[i] -= 32;
			}
		}
		printf("Toggle Case : %s\n",a);
}

void main()
{
	togglecase();
}
