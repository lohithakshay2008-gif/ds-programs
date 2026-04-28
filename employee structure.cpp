#include<stdio.h>
#include<string.h>
struct employee
{
	int eno;
	char ename[20];
	long int salary;
}e1={111,"abhi",60000},e2;
#include<stdio.h>
int main()
{
	struct employee e3={112,"vishal",55000},e4;
	e2.eno=113;
	strcpy(e2.ename,"akshay");
	e2.salary=50000;
	printf("enter e4 eno");
	scanf("%d",&e4.eno);
	printf("enter e4 ename");
	scanf("%s",&e4.ename);
	printf("enter e4 salary");
	scanf("%ld",&e4.salary);
	printf("%d%s%ld",e1.eno,e1.ename,e1.salary);
	printf("\n%d%s%ld",e2.eno,e2.ename,e2.salary);
	printf("\n%d%s%ld",e3.eno,e3.ename,e3.salary);
	printf("\n%d%s%ld",e4.eno,e4.ename,e4.salary);
	return 0;
}
