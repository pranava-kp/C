#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
};
int main()
{
   struct student s[2]={"john","doe"};
   printf("%s\n",s[0].name);
   printf("%s\n",s[1].name);
}