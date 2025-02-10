#include<stdio.h>
#include<string.h>
typedef struct student
{
	char s[20];
	int id;
}S;
int main()
{
	S s1;
	strcpy(s1.s,"Pranava");
	s1.id=118;
	printf("%s\n%d",s1.s,s1.id);
	return 0;
}

