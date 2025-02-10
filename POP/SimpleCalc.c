#include<Stdio.h>
int main()
{
    int a,b,c;
    float total;
    printf("Enter choice\n1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n5.Modulus\n");
    scanf("%d",&c);
    printf("Enter two operands");
    scanf("%d%d",&a,&b);
    switch(c)
    {
        case 1:
        total=a+b;break;
        case 2:
        total=a-b;break;
        case 3:
        total=a*b;break;
        case 4:
        if(b==0)
            printf("Invalid");
        else
            total=a/b;
        break;
        case 5:
        if(b==0)
            printf("Invalid");
        else
            total=a%b;
        break;

    }
    printf("%0.2f",total);
    return 0;
}