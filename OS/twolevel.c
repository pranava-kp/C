//twolevel
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Directory
{
    char dname[10],fname[10][10];
    int fcnt;
};
int main()
{
    struct Directory dir[10];
    int i, ch, dcnt = 0, k;
    char f[30], d[30];
    printf("1. Create Directory\n2. Create File\n3. Delete File\n4. Search File\n5. Display\n6.Exit\n");
    while (1) {
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    if (dcnt < 10)
    {
        printf("\nEnter name of directory: ");
        scanf("%s", dir[dcnt].dname);
        dir[dcnt].fcnt = 0;
        dcnt++;
        printf("Directory created\n");
    }
    else
        printf("Maximum directory limit reached.\n");
    break;
    case 2:
        printf("\nEnter name of the directory: ");
        scanf("%s", d);
        for (i = 0; i < dcnt; i++)
        {
            if (strcmp(d, dir[i].dname) == 0)
            {
                printf("Enter name of the file: ");
                scanf("%s", dir[i].fname[dir[i].fcnt]);
                dir[i].fcnt++;
                printf("File created\n");
                break;
            }
        }
        if (i == dcnt)
        {
            printf("Directory %s not found\n", d);
        }
        break;
    case 3:
        printf("\nEnter name of the directory: ");
        scanf("%s", d);
        for (i = 0; i < dcnt; i++)
            if (strcmp(d, dir[i].dname) == 0)
            {
                printf("Enter name of the file: ");
                scanf("%s", f);
                for (k = 0; k < dir[i].fcnt; k++)
                    if (strcmp(f, dir[i].fname[k]) == 0)
                        {
                            printf("File %s is deleted\n", f);
                            dir[i].fcnt--;
                            strcpy(dir[i].fname[k], dir[i].fname[dir[i].fcnt]);
                            break;
                        }
                if (k == dir[i].fcnt)
                    printf("File %s not found\n", f);
                break;
            }

        if (i == dcnt)
            printf("Directory %s not found\n", d);
        break;
    case 4:
        printf("\nEnter name of the directory: ");
        scanf("%s", d);
        for (i = 0; i < dcnt; i++)
            if (strcmp(d, dir[i].dname) == 0)
            {
                printf("Enter the name of the file: ");
                scanf("%s", f);
                for (k = 0; k < dir[i].fcnt; k++)
                    if (strcmp(f, dir[i].fname[k]) == 0)
                    {
                        printf("File %s is found\n", f);
                        break;
                    }
                if (k == dir[i].fcnt)
                    printf("File %s not found\n", f);
                break;
            }
        if (i == dcnt)
            printf("Directory %s not found\n", d);
        break;
    case 5:
        if (dcnt == 0)
            printf("\nNo Directories\n");
        else
        {
            printf("\nDirectory\tFiles\n");
            for (i = 0; i < dcnt; i++)
            {
                printf("%s\t\t", dir[i].dname);
                for (k = 0; k < dir[i].fcnt; k++)
                    printf("\t%s", dir[i].fname[k]);
                printf("\n");
            }
        }
        break;
    default:exit(0);
    }
    }
    return 0;
}