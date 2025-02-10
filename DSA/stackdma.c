#include<stdio.h>
#include<stdlib.h>
int size=3;
void push(int a[],int *top)
{
    if(*top==size-1)
    {
        printf("Overflow\nMemory doubled\n");
        a=realloc(a,size*2);
        size*=2;
    }
    int ele;
    printf("Enter element to push\n");
    scanf("%d",&ele);
    a[++(*top)]=ele;
}
void pop(int a[],int *top)
{
    if(*top==-1)
    {
        printf("Underflow\n");
        return;
    }
    printf("Popped element is %d\n",a[(*top)--]);
}
void display(int a[], int top)
{
    if(top==-1) 
        printf("Empty Stack\n");
    else
        while(top!=-1)
        {
            printf("%d\n",a[top]);
            top--;
        }
}
int main()
{
    int *a=(int*)malloc(sizeof(int)*size);
    int top=-1,ch;
    for(;;)
    {
        printf("1. Push\n2. Pop\n3. Display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push(a,&top);
                break;
            case 2:
                pop(a,&top);
                break;
            case 3:
                display(a,top);
                break;
            default:
                printf("Invalid\n");
        }
    }
}
