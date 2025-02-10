#include<stdio.h>
#include<math.h>
#define PI 3.142
int main()
    {
        int i, degree;
        float x, sum=0,term,num,den;
        printf("Enter the angle in degree\n");
        scanf("%d",&degree);
        x = degree * (PI/180);
        num = x;
        den = 1;
        i=2;
        do
        { 
            term = num/den;
            num = -num*x*x;
            den = den*i*(i+1);
            sum=sum+term;
            i=i+2;
        }while (fabs(term) >= 0.00001);
        printf("The sine of %d is %.3f\n", degree, sum);
        printf("The sine function of %d is %.3f", degree, sin(x));
        return 0;
    }