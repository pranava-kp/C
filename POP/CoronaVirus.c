#include<stdio.h>
#include<string.h>
int main()
{
    char s[20]="",r[20]="";
    int len,i;
    printf("Enter a string\n");
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]!='a' && s[i]!='A' && s[i]!='Z' && s[i]!='z' && s[i]!=' ')
            r[i]=s[i]+1;
        else
            r[i]=s[i];
    }
    r[len]='\0';
    printf("Updated string is %s",r);
    return 0;
}