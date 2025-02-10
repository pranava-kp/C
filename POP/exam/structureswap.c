#include <stdio.h>
struct student
{
    char name[20],usn[10];
    int marks[3];
}s[3];
void input();
void swap();
void display();

void main()
{
    input();
    swap();
    display();
}
void input()
{
    
    for(int i=0;i<2;i++)
    {
        printf("Enter name of student %d\n",i+1);
        scanf("%s",s[i].name);
        printf("Enter usn of student %d\n",i+1);
        scanf("%s",s[i].usn);
        printf("Enter marks in 3 subs\n");
        for(int j=0;j<3;j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
    }
        
}
void swap()
{
   s[2]=s[1];
   s[1]=s[0];
   s[0]=s[2];
}
void display()
{
    printf("Student deets after swapping is \n");
    for(int i=0;i<2;i++)
    {
        printf("Name %s\n",s[i].name);
        printf("USN %s\n",s[i].usn);
        for(int j=0;j<3;j++)
           printf("%d\t",s[i].marks[j]);
        printf("\n\n");
           
    }
}
