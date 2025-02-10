#include<stdio.h>
#include<math.h>
void quadratic(float,float,float);
int main()
{
    float a,b,c;
    printf("Enter the coefficients of x in quadratic equation\n");
    scanf("%f%f%f",&a,&b,&c);
    quadratic(a,b,c);
}
void quadratic(float x, float y, float z)
{
    if(x==0 && y!=0)
    {
        printf(" Not a quadratic equation");
        printf("\nx = %.3f ",(-z/y));
    }
    else if(x==0 && y==0)
        printf("Invalid Input");
    else
    {
        float d=(y*y)-(4*x*z);
        if(d<0)
        {
            printf("Roots are imaginary\nRoots are\n");
            printf("%.3f+%.3fi\n",(-y/(2*x)),(sqrt(fabs(d))/(2*x)));
            printf("%.3f-%.3fi\n",(-y/(2*x)),(sqrt(fabs(d))/(2*x)));
        }
        else if(d==0)
        {
            printf("One real roots exist\nRoot is %.3f",(y*y/(2*x)));
        }
        else
        {
            printf("Two real roots exist\nRoots are\n");
            printf("%.3f\n",((-y+sqrt(d))/(2*x)));
            printf("%.3f\n",((-y-sqrt(d))/(2*x)));
        }
    }
}