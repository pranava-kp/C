#include <stdio.h>
#include<string.h>

void main()
{
    char s1[20],s2[20],s3[40]="";
    int l1,l2,i;
    printf("Enter two strings\n");
    scanf("%s%s",s1,s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l1;i++)
    {
        s3[i]=s1[i];
    }
    for(i=0;i<l2;i++)
    {
        s3[l1+i]=s2[i];
    }
    printf("Updates string is %s",s3);
}