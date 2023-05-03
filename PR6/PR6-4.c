#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, j, k;
 
  	printf("Please Enter any String :  ");
  	gets(str);
  	 	
  	for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; j<strlen(str); j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; k<strlen(str); k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}
	
	printf("\n The Final String after Removing All Duplicates = %s ", str);
	
  	return 0;
}
