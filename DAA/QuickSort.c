#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int partition(int low,int high,int a[])
{
    int key=a[low],i=low,j=high+1;
    while (i < j)
    { 
        do{ 
            i++; 
        }while (a[i]<=key && i<= high-1);

        do{ 
            j--; 
        }while (a[j]>=key && j>= low+1); 
        if (i < j)
        { 
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        } 
    } 
    int temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j; 
}
int quick_sort(int a[],int low,int high)
{
    int j;
    if(low>=high)
    return -1;
    else
    {
        j=partition(low,high,a);
        quick_sort(a,low,j-1);
        quick_sort(a,j+1,high);
    }
    return 0;
}    
int main()
{
    printf("Input Size\tBest Case\t\tRandom Case\t\tWorst Case\n");
    int i,j,k;
    int *a;
    double used;
    clock_t start,end;
    for(int i=5001;i<=25001;i+=5000)
    {
        printf("%d\t\t",i);
        a=(int*)malloc(sizeof(int)*i);
        for(j=1;j<=3;j++)
        {
            if(j==1)
                for(k=0;k<i;k++)
                    a[k]=k;
            if(j==2)
                for(k=0;k<i;k++)
                    a[k]=rand()%10000;
            if(j==3)
                for(k=0;k<i;k++)
                    a[k]=i-k; 
            start=clock();
			quick_sort(a,0,i);
			end=clock();
			used=((double)(end-start)/((CLOCKS_PER_SEC)));
			printf("%f\t\t",used);
        }
        free(a);
        printf("\n");
    }
}