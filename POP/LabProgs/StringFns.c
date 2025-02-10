#include<stdio.h>
int len(char p[]);
int cmp(char q1[],char q2[]);
void concatenate(char r[],char s[]);
void main()
{
    char s1[100]="",s2[100]="";
    printf("Enter two strings\n");
    gets(s1);
    gets(s2);
    printf("Length of s1 is %d\n",len(s1));
    printf("Length of s2 is %d\n",len(s2));
    int compare=cmp(s1,s2);
    if(compare == -1)
        printf("Strings are not same\n%d\n",compare);
    else
        printf("Strings are same\n%d\n",compare);
    concatenate(s1,s2);
}
int len(char p[])
{
    int count=0;
    while(p[count]!='\0')
        count++;
    return count;    
}
int cmp(char q1[],char q2[])
{
    int i=0, l1=len(q1),l2=len(q2);
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            if(q1[i]!=q2[i])
            {   
                return -1;
                break;
            }
        }
    }
    else
        return -1;
}
void concatenate(char r[],char s[])
{
    char m[200];
    int tl=len(r)+len(s);
    for(int i=0;i<len(r);i++)
        m[i]=r[i];
    for(int i=len(r);i<tl;i++)
        m[i]=s[i-len(r)];
    printf("Concatenated string is %s",m);
}