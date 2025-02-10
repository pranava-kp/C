#include<stdio.h>
int main()
{
    int n=0;
    char name[20];
    float total=0;
    printf("Enter the name of the customer\n");
    scanf("%s",name);
    printf("Enter the number of units used\n");
    scanf("%d",&n);
    if(n>0 && n<=200)
        total=n*0.8;
    else if(n >200 && n<=300)
        total=(200*.8)+(n-200)*.9;
    else
        total=(200*.8)+(100*.9)+(n-300);
    total+=100;
    if(total>400)
        total+=total*.15;
    //printf("Name : %s\n",name);
    //printf("Units used : %d\n",n);
    printf("Payable amount : %0.2f\n",total);
    return 0;
}