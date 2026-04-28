#include<stdio.h>
#include<string.h>
struct student
{
	char name[10];
	int S1,S2,S3,S4,S5;
};
int main(int argc, char*argv[])
{
	struct student S;
	int total;
	strcpy(S.name,argv[1]);
	S.S1=atoi(argv[2]);
	S.S2=atoi(argv[3]);
	S.S3=atoi(argv[4]);
	S.S4=atoi(argv[5]);
	S.S5=atoi(argv[6]);
	total=S.S1+S.S2+S.S3+S.S4+S.S5;
	printf("name\tS1\tS2\tS3\tS4\tS5\total\n");
	printf("%S\t%d\t%d\t%d\t%d\t%d\t%d",S.name,S.S1,S.S2,S.S3,S.S4,S.S5,total);
	return 0;
}
