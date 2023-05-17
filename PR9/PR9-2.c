#include<stdio.h>

void main()
{
	FILE *f1;
	 
	
	char b[20];
	
	f1 = fopen("C:\\Users\\r6\\Desktop\\F2.txt","r");
	fscanf(f1,"%s",b);
	printf("Name: %s",b);
	
}
