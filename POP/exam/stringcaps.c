#include <stdio.h>
#include<string.h>


int main() {
    
    char s1[40]="";
    int i;
    printf("Enter a string\n");
    scanf("%s",s1);
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
            s1[i]-=32;
    }
    printf("Updated sting is %s\n",s1);
}