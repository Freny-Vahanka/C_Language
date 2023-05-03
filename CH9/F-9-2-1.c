#include<stdio.h>
#include<string.h>

/*1.WAP to check of a given password is valid or not by
satisfying below criteria:
(1)password must wntains at least one letter,one
digit and one special symbol.
(2)password must br at least of 6 characters.*/

void main()
{
	char pass[6];
	int i,length=0,count=0,sp=0,letter=0,digit=0;
	
	printf("Enter your Password: ");
	gets(pass);
	
	for(i=0;i<7;i++)
	{
		
		
			if(i>=65 && i<=90 || i>=97 && i<=122 )
			{
				letter ++;
				printf("letters",letter);
			}
			else if (i>=48 && i<=57)
			{
				digit++;
				printf("digit",digit);
			}
			else if (i='!'|| i= '@'|| i='#'|| i='$'|| i='%'||i='^'||i='&'||i='*')
			{
				sp++;
				printf("special character",sp);
			}
	}
	
	
	length=strlen(pass);
 	
	 if(length>6 && sp>0 && digit>0 && length>0)
	{
		printf("Your Password is Valid");
	}
	else
	{
			printf("Your Password is Invalid");
	}
}
