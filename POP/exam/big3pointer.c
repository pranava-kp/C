#include <stdio.h>
void big3(int *pt1,int *pt2,int *pt3);

void main() {
    
    printf("Enter 3 nos");
    int n1,n2,n3,*p1,*p2,*p3;
    scanf("%d%d%d",&n1,&n2,&n3);
    big3(&n1,&n2,&n3);

}
void big3(int *pt1,int *pt2,int *pt3)
{
    if(*pt1>=*pt2 && *pt1>=*pt3)
        printf("%d",*pt1);
    else if(*pt2>=*pt1 && *pt2>=*pt3)
        printf("%d",*pt2);
    else
        printf("%d",*pt3);
}