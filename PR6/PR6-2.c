#include<stdio.h>
#include<string.h>

void main()
{
	char str1[20],str2[20];
	int count=0;
	
	printf("Enter String:");
	gets(str1);
	
	strcpy(str2,str1);
	strrev(str2);
	count = strcmp(str1,str2);
	
	if(count==0)
	{
		printf("%s is Palindrome!!\n",str1);
	}
	else
	{
		printf("%s is NOT Palindrome!!\n",str1);
	}
	
	printf("Name1\t:");
	puts(str1);
	printf("Name2\t:");
	puts(str2);
}
