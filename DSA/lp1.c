#include<stdio.h>
#include<stdlib.h>
typedef struct calendar
{
    char *day,*desc;
    int date;
}calendar;
int n;
calendar* create()
{
    calendar* temp=(calendar*)malloc(sizeof(calendar)*7);
    if(temp==NULL)
        exit(0);
    for(int i=0;i<7;i++)
    {
        temp[i].day=(char*) malloc(sizeof(char)*9);
        temp[i].desc=(char*) malloc(sizeof(char)*100);
    }
    return temp;
}
void read(calendar* cal)
{
    
    printf("Enter number of days\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nDay %d\n",i+1);
        printf("Enter date\n");
        scanf("%d",&cal[i].date);
        printf("Enter day\n");
        scanf("%s",cal[i].day);
        printf("Enter description\n");
        scanf("%s",cal[i].desc);        
    }
}
void display(calendar* cal)
{
    for(int i=0;i<n;i++)
    {
        printf("\nDay %d\n",i+1);
        printf("date : %d\n",cal[i].date);
        printf("Day : %s\n",cal[i].day);
        printf("Description : %s\n",cal[i].desc);
    }
}
int main()
{
    calendar *cal=create();
    read(cal);
    display(cal);
    return 0;
}