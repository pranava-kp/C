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
	int i,n,k,ch;
	int* a;
	// printf("Enter the number of elements\n");
	// scanf("%d",&n);
	
	for(i=5001;i<=25001;i+=5000)
	{
		// printf("1. Best Case\n2. Worst Case\n3. Random Case\nEnter Choice \n");
		a=(int*)malloc(sizeof(int)*i);
		// scanf("%d",&ch);
		clock_t start,end;
		printf("%d\t",i);
		for(int j=1;j<=3;j++)
		{
			switch(j)
			{
			case 1:
				for(k=0;k<i;k++)
					a[k]=k;
				break;
			case 2:
				for(k=i;k>0;k--)
					a[k]=k;
				break;
			case 3:
				for(k=0;k<i;k++)
					a[k]=rand()%10000;
				break;
			default :
				exit(0);
			}
			start=clock();
			insertionSort(a,i);
			end=clock();
			double used=((double)(end-start))/CLOCKS_PER_SEC;
			printf("%lf\t",used);
			free(a);
		}
		printf("\n");
	}
}