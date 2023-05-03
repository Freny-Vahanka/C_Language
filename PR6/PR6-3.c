#include<stdio.h>
#include<string.h>
void main()
{
	char str[120],c;
	
	int i,j,len;
	
	printf("enter the string : ");
	gets(str);

	len = strlen(str);
    
	for(i=0; i<len; i++)
    {
        if(str[i] == ' ')
        {
            for(j=i; j<len; j++)
            {
           	   str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }
	printf("String after removing space: %s", str);
 }

