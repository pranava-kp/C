#include<time.h>
#include<stdio.h>
#include<stdlib.h>
void insertionSort(int a[], int n)
{
    int i,key,j;
    for (i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
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
			insertionSort(a,i);
			end=clock();
			used=((double)(end-start))/CLOCKS_PER_SEC;
			printf("%f\t\t",used);
			
        }
        free(a);
        printf("\n");
    }
}