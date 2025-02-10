#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
   int i, j, min,temp;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
    }
    if(min!=i)
    {
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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
			selectionSort(a,i);
			end=clock();
			used=((double)(end-start)/((CLOCKS_PER_SEC)));
			printf("%f\t\t",used);
        }
        free(a);
        printf("\n");
    }
}