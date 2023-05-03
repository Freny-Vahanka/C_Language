#include<stdio.h>

/* 5.WAP to convert given string in Title Case.*/

void main(){
	
		char a[20];
		
		printf("Enter string: ");
		scanf("%s",&a);
		
		int i;
		
		if(a[0]>=97 && a[0]<=122)
		{
				a[i] -= 32;
		}
		for(i=1;i<20;i++)
		{
			if(a[i]>=65 && a[i]<=90)
			{
				a[i] += 32;
			}
		}
		printf("Title Case : %s\n",a);
}
