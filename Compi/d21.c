#include<stdio.h>
int main(){
    int i=-1;
    if(1!=0){
        if(2==0){
            printf("a");
        }
    }
    else{
        printf("b");
    }
    if(1!=0)
        if(2==0)
            printf("c");
    else
        printf("d");


    return 0;
    for(i=0;i<10;i++){
        printf("%d\n",i);
    }
    printf("++%d\n",i);
    while(i--){
        printf("%03d\n",i);
    }
    do{
        printf("%02d\n",i);
        i++;
    } while(i<10);
    
}