#include <stdio.h>
struct student
{
    char name[20],usn[20];
}s[10];


void main() {
    int n;
    printf("Enter the number if students\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter USN %d \n",i+1);
        scanf("%s",s[i].usn);
        printf("Enter name %d \n",i+1);
        scanf("%s",s[i].name);
    }

    printf("Entered details are \n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t%s\n",s[i].name,s[i].usn);

    } 
}