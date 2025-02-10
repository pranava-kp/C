#include<stdio.h>
#include<math.h>
int main()
{
float a[10], *ptr, mean, std, sum=0, sumstd=0;
int n,i;//declaration of variables
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the array elements\n"); for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
ptr=a;
for(i=0;i<n;i++,ptr++)
    {
       sum=sum+ *ptr;
    }
mean=sum/n; // calculate mean
ptr=a;
for(i=0;i<n;i++)
    {
        sumstd=sumstd + pow((*ptr - mean),2);
        ptr++;
    }
std= sqrt(sumstd/n); // calculate standard deviation
printf("Sum=%.3f\t",sum);
printf("Mean=%.3f\t",mean);
printf("Standard deviation=%.3f\t",std);
return 0;
}