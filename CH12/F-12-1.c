#include<stdio.h>

struct student
{
	int stu_id;
	char stu_name[20] ;
	int stu_age;
	char stu_course[50];
	char stu_city[20] ;
	int stu_std;
	char stu_school[70];
};

void main()
{
	int i,n;
	printf("Enter no of students:  ");
	scanf("%d",&n);
	
	struct student s[n];
	
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
		printf("Enter Course\t\t: ");
		scanf("%s",&e[i].stu_course);
		printf("Enter City\t: ");
		scanf("%s",&e[i].stu_city);
		printf("Enter STD\t\t: ");
		scanf("%d",&e[i].stu_std);
		printf("Enter School\t\t: ");
		scanf("%s",&e[i].stu_school);
		
		system("cls");
	}
	
	printf("Id\tName\tAge\tCourse\tCity\tSTD\tSchool\n");
	printf("======= ======= ======= ======= ======= ======= ========\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",e[i].stu_id);
		printf("%s\t",e[i].stu_name);
		printf("%d\t",e[i].stu_age);
		printf("%s\t",e[i].stu_course);
		printf("%s\t",e[i].stu_city);
		printf("%d\t",e[i].stu_std);
		printf("%s\t",e[i].stu_school);
	}
}
	
