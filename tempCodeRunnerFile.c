#include<stdio.h>
// #include<iostream.h>
#include<stdlib.h>
int main()
{
    int *p=malloc(100);
    int n=100;
    while(1)
    {
        p=realloc(p,sizeof(int)*n);
        n+=100;
    }
}