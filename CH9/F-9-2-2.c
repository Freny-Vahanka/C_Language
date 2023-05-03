#include<stdio.h>
#include<string.h>

void main()
{
	char str1[20] = "fvahanka@gmail.com",str2[20] = "f2004",str3[20],str4[20];
	
	printf("Enter your Email Id: ");
	gets(str3);
	printf("Enter your Password: ");
	gets(str4);
	
	int count1=0,count2=0;
	
	count1 = strcmp(str1,str3);
	count2 = strcmp(str2,str4);
	
	if(count1==0)
	{
		if(count2==0)
		{
			printf("Valid Password");
		}
		else
		{
			printf("Invalid Password");
		}
	}
	else
	{
		printf("Invalid Email Id!!");
	}
	
}
