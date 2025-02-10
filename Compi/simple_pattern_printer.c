#include<stdio.h>
int check(int i,int j){

    //line equations(all right angle triange pattern)
    // if(i-j<0)
    //     return 0;
    
    // if(i-j>=0)
    //     return 0;
    
    // if(i+j<10)
    //     return 0;
    
    // if(i+j>=10)
    //     return 0;
    
    // chess Board patterns
    // if((i+j)%2>0)
    //     return 0;

    // fat chess board
    // if((j%4<2) && (i%2==0))
    //     return 0;
    // else if ((j%4>=2) && (i%2!=0))
    //     return 0;
    
    // if(i-j<0)
    //     return 0;
    // else if(i+j<10)
    //     return 0;

    // Pascal's Triangle 
    // if(i-j<0) 
    //     return 0;
    // else if(i+j<10)
    //     return 0;
    // else if((i+j)%2==0)
    //     return 0;

    // if((i-5)*(i-5)+(j-5)*(j-5)>4*4) //circle equation
        // return 0;
    return 1;
}
int main(){
    int N=10;
    int arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(check(i,j)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}