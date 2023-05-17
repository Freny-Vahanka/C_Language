#include<stdio.h>

void main()
{
	FILE *f1;
	FILE *f2;
	
	char a[30];
	
	f2 = fopen("C:\\Users\\r6\\Desktop\\f1.txt","w");
	f1 = fopen("C:\\Users\\r6\\Desktop\\F2.txt","r");
	
	fscanf(f1,"%s",&a);
	printf("%s",a);
	fprintf(f2,"%s",a);
}
