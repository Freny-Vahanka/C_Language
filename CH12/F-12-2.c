#include<stdio.h>

struct stuloyee
{
	int stu_id;
	char stu_name[20] ;
	int stu_age;
	char stu_role[50];
	char stu_city[20] ;
	char stu_experience[50];
	char stu_company_name[70];
};

void main()
{
	int i,n;
	printf("Enter no of stuloyee:  ");
	scanf("%d",&n);
	
	struct stuloyee e[n];
	
	system("cls");
	
	for(i=0;i<n;i++)
	{
		printf("student (%d/%d)\n",i+1,n);
		
		printf("Enter Id\t\t: ");
		scanf("%d",&e[i].stu_id);
		printf("Enter Name\t\t: ");
		scanf("%s",&e[i].stu_name);
		printf("Enter Age\t\t: ");
		scanf("%d",&e[i].stu_age);
		printf("Enter Role\t\t: ");
		scanf("%s",&e[i].stu_role);
		printf("Enter City\t\t: ");
		scanf("%s",&e[i].stu_city);
		printf("Enter Experience\t: ");
		scanf("%s",&e[i].stu_experience);
		printf("Enter Company_Name\t: ");
		scanf("%s",&e[i].stu_company_name);
		
		system("cls");
	}
	
	printf("Id\t\tName\t\tAge\t\tRole\t\tCity\t\tExperience\tCompany_Name\n");
	printf("============== =============== ============== =============== ============== ============== ===============\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t\t",e[i].stu_id);
		printf("%s\t\t",e[i].stu_name);
		printf("%d\t\t",e[i].stu_age);
		printf("%s\t\t",e[i].stu_role);
		printf("%s\t\t",e[i].stu_city);
		printf("%s\t\t",e[i].stu_experience);
		printf("%s\t",e[i].stu_company_name);
	}
}
	
