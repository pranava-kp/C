//bfs


#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

int a[SIZE][SIZE], f[SIZE];

void read(int n) {
    int i,j;
    printf("Enter adjacent matrix\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
}

int main()
{
    int front, rear, i, j, source, n;
    int Q[SIZE];
    printf("Enter number of nodes:\n");
    scanf("%d", &n);
    read(n);
    for(source=0; source<n; source++)
    {
        for(i=0; i<n; i++)
            f[i]=0;
        f[source]=1;
        front = 0;
        rear = -1;
        Q[++rear]=source;
        printf("\nNodes reachable from %d are \n",source);
        while(front <= rear)
        {
            for(j=0; j<n; j++)
            {
                if(a[Q[front]][j]==1 && f[j]==0)
                {
                    printf("%d\t",j);
                    Q[++rear]=j;
                    f[j]=1;
                }
            }
            front++;
        }
    }
    return 0;
}
