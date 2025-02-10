```#include<stdio.h>
#include<string.h>
typedef struct Student
{
    float stavg;
    int std;
    char sn[10];
    int stm1;
    int stm2;
}S;
void accept(S *st, int n)
{
    int i;
    char name[10]="";
    int m1,m2,id;
    m1=0;
    m2=0;
    for(i=0;i<n;i++)
    {
        printf("Enter Student ID\n");
        scanf("%d",&id);
        printf("Enter student name\n");
        scanf("%s",name);
        if(strlen(name)<5)
        {
            do
            {   
                printf("Enter longer name\n");
                scanf("%s",name);
            }while(strlen(name)<5);
        }
        printf("Enter marks 1 and marks 2\n");
        scanf("%d%d",&m1,&m2);
        if(m1<0 || m1>50 || m2<0 || m2>50)
        {
            do
            {   
                printf("Invalid marks\nEnter correct marks\n");
                scanf("%d%d",&m1,&m2);
            }while((m1<0 && m1>50) && (m2<0 && m2>50));
        }
        st[i].std=id;
        st[i].stm1=m1;
        st[i].stm2=m2;
        strcpy(st[i].sn,name);
    }
}
void display(S *s,int i)
{
    printf("Student ID : %d\n",s[i].std);
    printf("Student name : %s\n",s[i].sn);
    printf("Average : %.2f\n",s[i].stavg);
    printf("Marks 1 : %d\n",s[i].stm1);
    printf("Marks 2 : %d\n",s[i].stm2);
    printf("Total : %d\n\n",(s[i].stm1+s[i].stm2));
}
void find_tavg(S *s,int n)
{
    float havg=0,lavg=50,avg;
    int i;
    for(i=0;i<n;i++)
    {
        s[i].stavg=(float)(s[i].stm1+s[i].stm2)/2;
        avg=s[i].stavg;
        if(avg>havg)
            havg=avg;
        if(avg<lavg)
            lavg=avg;
    }
    printf("HIGHEST AVERAGE\n");
    for(i=0;i<n;i++)
    {
        if(s[i].stavg==havg)
            display(s,i);
    }
    printf("LOWEST AVERAGE\n");
    for(i=0;i<n;i++)
    {
        if(s[i].stavg==lavg)
            display(s,i);
    }
}
int main()
{
    int n;
    S s1[10];
    printf("Enter number of students\n");
    scanf("%d",&n);
    accept(s1,n);
    find_tavg(s1,n);
}```
