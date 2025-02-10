#include <stdio.h>
#include<math.h>
double PI = 3.142;
double series_sum(double x)
    {
        x = x * (PI / 180.0);
        double result = 1;
        double s = 1, fact = 1, pow = 1;
        for (int i = 1; i < 5; i++)
            {
                s *= -1;
                fact *= (2 * i - 1) * (2 * i);
                pow *= x * x;
                result += s * pow / fact;
            }
    return result;
    }
int main()
    {
        float x = 60;
        printf("The cosine of %.3f is %.3f\n", x,series_sum(x));
        printf("The cosine function of %.3f is %.3f", x, cos(x*PI/180));
        return 0;
    }