#include<stdio.h>
struct studentdeets
{
    char name[20],USN[20];
    int math,english,pop,IA;
};
int main()
{
    struct studentdeets student[10]={};
    int n,i;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name of student %d\n",i+1);
        scanf("%s",student[i].name);
        printf("Enter USN of student %d\n",i+1);
        scanf("%s",student[i].USN);
        printf("Enter marks in 3 subjects\n");
        scanf("%d%d%d",&student[i].math,&student[i].english,&student[i].pop);
        student[i].IA=student[i].math+student[i].english+student[i].pop;
    }
    for(i=0;i<n;i++)
    {
        printf("Name : %s\n",student[i].name);
        printf("USN : %s\n",student[i].USN);
        printf("Total : %d\n",student[i].IA);
        
    }
    return 0;
}