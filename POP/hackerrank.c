#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	float *area=(float*)malloc(sizeof(float)*n);
    float *p=(float*)malloc(sizeof(float)*n);
    int i=0,j;
    for(i=0;i<n;i++)
    {
        p[i]=(float)(tr[i].a+tr[i].b+tr[i].c)/2;
        area[i]=sqrt(p[i]*(p[i]-tr[i].a)*(p[i]*tr[i].b)*(p[i]-tr[i].c));
    }
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            if(area[j]>area[j+1])
            {
                int a,b,c;
                float temp;
                temp=area[j];
                area[j]=area[j+1];
                area[j+1]=temp;
                a=tr[j].a;
                b=tr[j].b;
                c=tr[j].c;
                tr[j].a=tr[j+1].a;
                tr[j].b=tr[j+1].b;
                tr[j].c=tr[j+1].c;
                tr[j+1].a=a;
                tr[j+1].b=b;
                tr[j+1].c=c;
            }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}