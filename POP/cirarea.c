#include <stdio.h>
float area(int a);

int main() {
    int r;
    float ar;
    printf("Enter the radius\n");
    scanf("%d",&r);
    ar=area(r);
    printf("Area of the circle is %.2f",ar);
    return 0;
}
float area(int a)
{
    return 3.14*a*a;
}