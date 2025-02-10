#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void Merge(int a[], int low, int mid, int high)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = 0;
    int *C = (int*) malloc(sizeof(int) * (high - low + 1));
 
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
            C[k++] = a[i++];
        else
            C[k++] = a[j++];
    }
    while (i <= mid)
        C[k++] = a[i++];
    while (j <= high)
        C[k++] = a[j++];
    for (i = low, k = 0; i <= high; i++, k++)
        a[i] = C[k];
    free(C);
}

void MergeSort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, mid, high);
    }
}
int main()
{
    printf("Input Size\tBest Case\tRandom Case\tWorst Case\n");
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
			MergeSort(a,0,i-1);
			end=clock();
			used=((double)(end-start))/CLOCKS_PER_SEC;
			printf("%lf\t\t",used);
        }
        free(a);
        printf("\n");
    }
}