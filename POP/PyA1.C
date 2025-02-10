#include <stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,marks;
    float percent;
    char name[20], USN[20];
    printf("\nEnter your name\n");
    scanf("%s",&name);
    printf("Enter your usn\n");
    scanf("%s",&USN);
    printf("Maths\n");
    scanf("%d",&a);
    printf("Python\n");
    scanf("%d",&b);
    printf("English\n");
    scanf("%d",&c);
    printf("%d",a);
    marks=a+b+c;
    percent=(float)marks/3;
    printf("Name:%s\nUSN:%s\nMaths:%d\nPython:%d\nEnglish:%d\nTotal marks:%d\nPercentage:%0.2f",name,USN,a,b,c,marks,percent);
    return 0;
}
