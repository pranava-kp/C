#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Emp
{
    char name[20];
    int id;
}E;
void accept(E *e,int n);
void display(E *e,int n);
int searchi(E *e,int n);
int searchn(E *e,int n);
int main()
{
    E e[10];
    int i,n,ch,res;
    printf("Enter number of employees\n");
    scanf("%d",&n);
    accept(e,n);
    for(;;)
    {
        printf("Search by\n1.Employee ID\n2. Employee name\n3. Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            res=searchi(e,n);
            display (e,res);
            break;
            case 2:
            res=searchn(e,n);
            display (e,res);
            break;
            default:
            exit(0);
        }
    }
}
int searchi(E *e,int n)
{
    int r=-1,i,id;
    printf("Enter search ID\n");
    scanf("%d",&id);
    for(i=0;i<n;i++)
        if(e[i].id==id)
            r=i;
    return r;
}
int searchn(E *e,int n)
{
    int r=-1,i;
    char name[20]="";
    printf("Enter search name\n");
    scanf("%s",name);
    for(i=0;i<n;i++)
        if(strcmp(name,e[i].name)==0)
            r=i;
    return r;
}
void accept(E *e,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter ID and name\n");
        scanf("%d%s",&e[i].id,e[i].name);
    }
}
void display(E *e,int n)
{
    if(n==-1)
    {
        printf("Employee does not exist\n");
    }
    else
    {
        printf("Emplyee name : %s\n",e[n].name);
        printf("Employee ID : %d\n",e[n].id);
    }
}
