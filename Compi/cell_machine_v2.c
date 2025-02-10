#include <stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#define flag printf("\nflag\n");
#define SIZE 5*(2*n+1)*n
#define Understand_CMD_Shit \
    if (argc>1) \
        sscanf(argv[1],"%d",&frame_interval); \
    if (argc>2) \
        sscanf(argv[2],"%d",&n); \

int delay(int delay_time){
    clock_t millis;
    millis=clock();
    while(millis+delay_time>clock());
    return delay_time;
}

int print_pattern(int * data,int **cells){
    /*
    data[0] holds size of array
    data[1] holds 'N'
    */
    int n=data[1],ptr=0;
    char stream[SIZE];
    for(int i=0;i<n;i++){
        stream[ptr++]=(char)177;
        for(int j=0;j<n;j++){
            switch(cells[i][j]){
                case 0:
                    stream[ptr++]=' ';
                    stream[ptr++]=' ';
                    break;
                case 1:
                    stream[ptr++]=(char)219;
                    stream[ptr++]=(char)219;
                    break;
                default:
                    stream[ptr++]=(char)177;
                    stream[ptr++]=(char)177;
                    break;
            }
        }
        stream[ptr++]=(char)177;
        stream[ptr++]='\n';
    }
    stream[ptr]='\0';
    // printf("\e[1;1H\e[2J%s",stream);
    system("cls");
    printf("%s",stream);
    return ptr;
}



int update(int **cells,int n){
    int new_cells[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int nearby=
                cells[(n+i-1)%n][(n+j-1)%n]+
                cells[(n+i-1)%n][(n+j  )%n]+
                cells[(n+i-1)%n][(n+j+1)%n]+
                cells[(n+i  )%n][(n+j-1)%n]+
                cells[(n+i  )%n][(n+j+1)%n]+
                cells[(n+i+1)%n][(n+j-1)%n]+
                cells[(n+i+1)%n][(n+j  )%n]+
                cells[(n+i+1)%n][(n+j+1)%n];

            /*incoming complicated code for
                if there are 2 or 3 living neighbours, you live, else ded
                if cell is ded but have 3 living neighbours, cell reborn
            */
            switch(nearby){
                case 0:
                case 1:new_cells[i][j]=0;
                    break;
                case 2:new_cells[i][j]=cells[i][j];
                    break;
                case 3:new_cells[i][j]=1;
                    break;
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                    new_cells[i][j]=0;
            }            
        }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cells[i][j]=new_cells[i][j];
}

int starting_pattern(int **cells,int x,int y){
    cells[5+x][0+y]=1;
    cells[5+x][2+y]=1;
    cells[4+x][2+y]=1;
    cells[3+x][4+y]=1;
    cells[1+x][4+y]=1;
    cells[2+x][4+y]=1;
    cells[2+x][6+y]=1;
    cells[1+x][6+y]=1;
    cells[0+x][6+y]=1;
    cells[1+x][7+y]=1;
}


int main(int argc,char* argv[]){
    srand(time(NULL));
    int frame_interval=300,n=11,data[3];
    Understand_CMD_Shit
    data[0]=3;
    data[2]=0;//some random value
    data[1]=n;
    int **cells=(int**)calloc(n,sizeof(int*));
    if (cells==NULL)
    {
        printf("Big Problem");
        return -1;
    }
    for(int i=0;i<n;i++){
        cells[i]=(int*)calloc(n,sizeof(int));
        if (cells[i]==NULL)
        {
            printf("Problem");
            return -1;
        }
    }
    // for(int i=0;i<n;i++){
    //     // printf("%d",i);
    //     for(int j=0;j<n;j++){
    //         // printf("%d",j);
    //         cells[i][j]=0;
    //     }
    //     // flag
    // }

    //initialize some spots
    // cells[6][1]=1;
    // cells[6][3]=1;
    // cells[5][3]=1;
    // cells[4][5]=1;
    // cells[2][5]=1;
    // cells[3][5]=1;
    // cells[3][7]=1;
    // cells[2][7]=1;
    // cells[1][7]=1;
    // cells[2][8]=1;
    starting_pattern(cells,0,0);

    // cells[1][2]=1;
    // cells[2][3]=1;
    // cells[3][1]=1;
    // cells[3][2]=1;
    // cells[3][3]=1;
    // cells[5][3]=1;
    // cells[5][5]=1;
    // cells[7][6]=1;
    // for(int i=1;i<n-1;i++)
    //     for(int j=1;j<n-1;j++)
    //         cells[i][j]=rand()%4==0;

    print_pattern(data,cells);
    while(1){
        update(cells,n);
        delay(frame_interval);
        print_pattern(data,cells);
    }
}