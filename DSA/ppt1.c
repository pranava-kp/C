#include<stdio.h>
int strpos1(char str[10],char ch)
{
    int pos=-1,i;
    for(i=0;str[i]!=ch;i++)
        if(str[i]==ch)
            {
                pos=i;
                break;
            }
    return pos;    
}
int main()
{
    char str[10],ch;
    int res;
    printf("Enter a string and search character\n");
    scanf("%s %c",str,&ch);
    res=strpos1(str,ch);
    if(res!=-1)
        printf("Position is %d",res);
    else
        printf("Search element does not exist\n");
}