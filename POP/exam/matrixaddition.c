#include <stdio.h>
struct matrix
{
    float a[2][2];
}s[3];
void input();
void calculate();
void display();

void main()
{
    input();
    calculate();
    display();
}
void input()
{
    printf("Enter values of matrix a");
    for(int h=0;h<2;h++)
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                scanf("%f",&s[h].a[i][j]);
}
void calculate()
{
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            s[2].a[i][j]=s[0].a[i][j]+s[1].a[i][j];
}
void display()
{
    printf("Sum of two matrices is \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            printf("%.3f\t",s[2].a[i][j]);
        printf("\n");
    }
}
