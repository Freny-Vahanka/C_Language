#include<stdio.h>
#include<string.h>
 
void main()
{
	char str[20];
	
	printf("Enter your string:");
	gets(str);
	
	int f[strlen(str)],i,j,length,count=0;
	

	
	for(i=0;i<strlen(str);i++);
	{
		count=1;
		
		if(str[i])
		{
			for(j=i+1;j<strlen(str);j++)
			{
				if(str[i]==str[j])
				{
					count++;
					
				}
			}
			printf("The frequency of %c is %d\n",str[i],count);
		}
	}
}
