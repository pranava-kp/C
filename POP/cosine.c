#include<stdio.h>
#include<math.h>
#define PI 3.142
int main()
    {
        int i, degree;
        float x, sum=1,term,num,den;
        printf("Enter the angle in degree\n");
        scanf("%d",&degree);
        x = degree * (PI/180);
        num = -x*x;
        den = 2;
        i=3;
        do
        { 
            term = num/den;
            num = -num*x*x;
            den = den*i*(i+1);
            sum=sum+term;
            i=i+2;
        }while (fabs(term) >= 0.00001);
        printf("The cosine of %d is %.3f\n", degree, sum);
        printf("The cosine function of %d is %.3f", degree, cos(x));
        return 0;
    }