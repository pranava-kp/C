#include <stdio.h>
#include<math.h>
void input();
void calculate();
void output();
float a[20]={0},sum=0,*ptr,sumstd=0;
float mean,sd;
int n;
void main() {
    
    input();
    calculate();
    output();

}
void input()
{
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
        scanf("%f",&a[i]);
}
void calculate()
{
    ptr=a;
    for(int i =0;i<n;i++,ptr++)
        sum+=*ptr;
    mean=sum/n;
    
    ptr=a;
    for(int i=0;i<n;i++,ptr++)
    {
        sumstd+=pow((mean-*ptr),2);
    }
    sd=sqrt(sumstd/n);
    
    
}
void output()
{
    printf("Sum of elements is %d\n",sum);
    printf("Mean of elements is %.2f\n",mean);
    printf("SD of elements is %.5f\n",sd);
}