#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Emp
{
    char name[20];
    int id;
}E;
void display(E *e,int n)
{
	int i;
    for(i=0;i<n;i++)
    {
        printf("Emplyee name : %s\n",e[i].name);
        printf("Employee ID : %d\n",e[i].id);
        printf("\n");
    }
}
void accept(E *e,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter ID and name\n");
        scanf("%d%s",&e[i].id,e[i].name);
    }
}
void sort(E *e,int n)
{
	int i,j;
    E temp;
	//char na[20];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
			if(e[j].id>e[j+1].id)
			{
				temp=e[j];
				e[j]=e[j+1];
				e[j+1]=temp;
			}
	}
}
int main()
{
    E e[10];
    int i,n,ch,res;
    printf("Enter number of employees\n");
    scanf("%d",&n);
    accept(e,n);
    sort(e,n);
    display(e,n);
}
