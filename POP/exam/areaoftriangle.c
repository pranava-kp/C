#include <stdio.h>

float area(float *x,float *y);

void main() {
    
    float a,b,h;
    printf("Enter base and height os triangle\n");
    scanf("%f%f",&b,&h);
    a=area(&b,&h);
    printf("Area is %.2f",a);
}
float area(float *x,float *y)
{
    return .5**x**y;
}