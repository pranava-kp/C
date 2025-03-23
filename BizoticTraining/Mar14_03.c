#include<stdio.h>
int main()
{
    double sal;
    int weekend,weekday;
    scanf("%lf",&sal);
    weekend=((int)sal-800)/130;
    weekday=weekend+10;
    printf("Number of weekday hours is %d\nNumber of weekend hours is %d\n",weekday,weekend);
    return 0;
}