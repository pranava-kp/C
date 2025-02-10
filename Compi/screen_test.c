#include <stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#define flag printf("\nflag\n");
#define SIZE 4*(2*n+1)*n
#define Understand_CMD_Shit \
    if (argc>1) \
        sscanf(argv[1],"%d",&frame_interval); \
    if (argc>2) \
        sscanf(argv[2],"%d",&n); \

int check(int row,int col,int n,int frame){
    double val=sqrt(row*row+col*col)-frame,gap=1.0;
    if (val<-gap){
        return 1;
    }
    else if (val>gap){
        return 0;
    }
    else{
        return 2;
    }
}
int delay(int delay_time){
    clock_t millis;
    millis=clock();
    while(millis+delay_time>clock());
    return delay_time;
}

int print_pattern(int * data){
    /*
    data[0] holds size of array
    data[1] holds 'N'
    data[2] holds 'frame_no'
    */
    int n=data[1],frame=data[2],ptr=0;
    char stream[SIZE];
    for(int i=1-n;i<n;i++){
        for(int j=1-n;j<n;j++){
            switch(check(i,j,n,frame)){
                case 0:
                    stream[ptr++]=' ';
                    stream[ptr++]=' ';
                    break;
                case 1:
                    stream[ptr++]=(char)219;
                    stream[ptr++]=(char)219;
                    break;
                case 2:
                    stream[ptr++]=(char)177;
                    stream[ptr++]=(char)177;
                    break;
            }
        }
        stream[ptr++]='\n';
    }
    stream[ptr]='\0';
    system("cls");
    printf("%s",stream);
    return n*n+n+1;
}

int main(int argc,char* argv[]){
    int frame_interval=300,n=10,data[3];
    Understand_CMD_Shit
    data[0]=3;
    data[1]=n;
    for(int i=0;i<16*n;i++){
        if(i%(2*n)<n){
            data[2]=i%n;
        }
        else{
            data[2]=n-(i%n);
        }
        delay(frame_interval);
        print_pattern(data);
    }
}