#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct User
{
    char username[50];
    char pwd[50];
    struct User* link;
};
typedef struct User* USER;

USER createUserNode(char* username,char* pwd)
{
    USER temp=(USER)malloc(sizeof(struct User));
    if (temp==NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    temp->link=NULL;
    return temp;
}

USER insert(USER first,char* username,char* pwd)//insert rear
{
    USER temp=createUserNode(username,pwd);
    strcpy(temp->username,username);
    strcpy(temp->pwd,pwd);
    if (first==NULL)
        return temp;
    else
    {
        USER cur=first;
        while (cur->link!=NULL)
            cur=cur->link;
        cur->link=temp;
        return first;
    }

}

int authenticate(USER first,char* username,char* pwd)
{
    USER temp=first;
    while (temp!=NULL)
    {
        if(strcmpi(temp->username,username)==0&&strcmp(temp->pwd,pwd)==0)
            return 1;
        temp=temp->link;
    }
    return 0;
}

int main()
{
    USER userlist=NULL;
    userlist=insert(userlist,"user1","password1");
    userlist=insert(userlist,"user2","password2");
    userlist=insert(userlist,"user3","password3");
    char usn[50];
    char pwd[50];
    printf("Enter username\n");
    scanf("%s",usn);
    printf("Enter password\n");
    scanf("%s",pwd);
    if (authenticate(userlist,usn,pwd))
        printf("Authenticated successfully\n");
        //further functions
    else
        printf("Invalid username or password.\n");
    return 0;
}