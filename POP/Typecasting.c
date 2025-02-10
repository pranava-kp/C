#include<stdio.h>
int main()
{
    float sal=0;
    printf("Enter salary\n");
    scanf("%f",&sal);
    printf("Salary in int is %d\n",(int)sal);
    printf("Salary in float is %0.6f\n",sal);
    return 0;
}