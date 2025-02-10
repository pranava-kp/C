#include <stdio.h>
#include<string.h>

void main() {
    printf("Enter a string\n");
    char s1[20],s2[20]="";
    scanf("%s",s1);
    for(int i=0;i<strlen(s1);i++)
    {
        s2[i]=s1[strlen(s1)-i-1];

    }
    printf("Updated sting is %s",s2);

}