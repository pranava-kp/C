#include<stdio.h>
int length(char*s)
{
    int len=0;
    for(;s[len]!='\0';len++);
    return len;
}

void replace(char str1[50],char pattern[50],char rep[50],char final[50])
{
    int p=length(pattern),q=0,e,k=0;
    while(str1[k]!='\0')
    {
        for(e=0;e<p;e++)
            if(pattern[e]!=str1[k+e])
                break;
        if(e==p)
        {
            for(int i=0;i<length(rep);i++)
                final[q++]=rep[i];
            k+=p;
        }
        else
            final[q++]=str1[k++];
    }
    final[q]='\0';
}

int main()
{
    char str1[50],pattern[50],rep[50],final[50];
    printf("Enter original string\n");
    scanf("%s",str1);
    printf("Enter pattern string\n");
    scanf("%s",pattern);
    printf("Enter string to replace with \n");
    scanf("%s",rep);
    replace(str1,pattern,rep,final);
    printf("Outout is %s",final);
}