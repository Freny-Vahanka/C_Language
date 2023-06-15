#include<stdio.h>

void sum()
{
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	
	printf("sum : %d",a+b);
	
}
void sub()
{
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	
	printf("sub: %d",a-b);
	
}
void multiply()
{
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	
	printf("multiply : %d",a*b);
	
}
void divide()
{
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	
	printf("divide : %d",a/b);
	
}
void modulus()
{
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	
	printf("modulus: %d",a%b);
	
}

void main()
{
	int choice,a,b;
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	do
	{
		printf("1) Press 1 for +\n");
		printf("2) Press 2 for -\n");
		printf("3) Press 3 for *\n");
		printf("4) Press 4 for /\n");
		printf("5) Press 5 for %\n");
		printf("6) Press 0 for exit\n");
		
		switch(choice)
		{
			case 1:
					printf("For Addition:");
					sum = sum(a,b);
					printf("sum = %d",sum);
					break;
			
			case 2:
					printf("For Subtraction:");
					sub = sub(a,b);
					printf("sub = %d",sub);
					break;
					
			case 3:
					printf("For Multiply:");
					multiply = multiply(a,b);
					printf("multiply = %d",multiply);
					break;
					
			case 4:
					printf("For Division:");
					divide = divide(a,b);
					printf("divide = %d",divide);
					break;
					
			case 5:
					printf("For modulus:");
					modulus = modulus(a,b);
					printf("modulus = %d",modulus);
					break;
					
		}
	}while(choice!=0);
}

