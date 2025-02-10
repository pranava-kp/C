#include<stdio.h>
int main()
{
    int cp=0,cn=0,cz=0,n;
    while(0)
    {
        printf("Enter number\n");
        scanf("%d",&n);
        if(n==-1)
            break;
        else if(n<-1)
            cn++;
        else if(n>0)
            cp++;
        else
            cz++;
    }
    printf("Negative nos : %d\n",cn);
    printf("Positive nos : %d\n",cp);
    printf("Zeros : %d\n",cz);
    return 0;
}