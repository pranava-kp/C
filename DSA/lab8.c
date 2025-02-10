#include<stdio.h>
#include<string.h>
typedef struct student
{
	char name[20];
	int id;
}S;
void accept(S *s1)
{
	printf("Enter name and ID\n");
	scanf("%s%d",s1->name,&s1->id);
}
void display(S s1)
{
	printf("%s\n%d",s1.name,s1.id);
}
int main()
{
	S s1;
	accept(&s1);
	display(s1);
	return 0;
}

