#include<time.h>
#include<stdio.h>
int main()
{
    int age,year;
    time_t currentTime = time(NULL);
    struct tm *localTime = localtime(&currentTime);
    char name[20];
    printf("\nEnter the name\n");
    scanf("%s",&name);
    printf("Enter the year of birth\n");
    scanf("%d",&year);
    age=localTime->tm_year + 1900-year;
    if(age>=60)
    {
    printf("%s aged %d is a senior citizen",name,age);
    }
    else
    {
    printf("%s aged %d is not a senior citizen",name,age);
    }
    return 0;
}