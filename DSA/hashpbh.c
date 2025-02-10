#include <stdio.h>
#include <stdlib.h>
#define HZ 3
struct employee
{
	int empno;
	char name[20];
	int sal;
};
typedef struct employee EMP;
struct hashtable
{
  int key; 
  long int addr; 
};
typedef struct hashtable ht;
int hashval(int empno)
{
	return empno%HZ;
}
void insert(FILE *fp,ht *h,int n)
{
  EMP a;
  int i,hindex,countindex;
   for(i=0;i<n;i++)
	{
    	printf("Enter empno name and salary\n");
    	scanf("%d%s%d",&(a.empno),a.name,&(a.sal));
    	hindex = hashval(a.empno); 
    	countindex=hindex;
    	while(h[hindex].key != -1)
    	{	 
        	hindex = (hindex+1) % HZ;
       	 
        	if (hindex == countindex)
        	{
                	printf("Entry not possible... \n");
                	return;
        	}
    	}
    	h[hindex].key = a.empno;
    	fseek(fp,0,SEEK_END);
    	h[hindex].addr = ftell(fp);
    	fwrite(&a,sizeof(EMP),1,fp);
	}  
}
void display(FILE *fp,ht *h)
{
  EMP a;
  int i;  
 
  for(i=0;i<HZ;i++)
  {    
 	if (h[i].key != -1)
 	{
		printf("key:%d\taddress:%ld\n",h[i].key,h[i].addr);
   		fseek(fp, h[i].addr,SEEK_SET); 	 
   		fread(&a,sizeof(EMP),1,fp);
   		printf("%d %s %d \n",a.empno,a.name,a.sal);
 	}
  }  
}
void search(FILE *fp,ht *h)
{
  EMP a;
  int hindex,countindex;
 
  printf("Enter emp no to search\n");
  scanf("%d",&(a.empno));
  hindex =  hashval(a.empno);
  countindex=hindex;
	while (h[hindex].key != a.empno)
	{    
    	hindex=(hindex+1)%HZ;
    	if (countindex == hindex)
    	{
        	printf("Search unsuccessful\n");
        	return;
    	}
	}

	fseek(fp,h[hindex].addr,SEEK_SET);
	fread(&a,sizeof(EMP),1,fp);
	printf("Emp Det found\n");
	printf("%d %s %d\n",a.empno,a.name,a.sal);
}
int main()
{
	FILE *fp;
	ht h[HZ];
	int i,n,ch;
    // for(n=0;n<HZ;n++) 
    //     h[n].key = -1;
	while(1)
	{
    	printf("Enter 1: Insert 2: display 3:search 4:exit\n");
    	scanf("%d",&ch);
    	switch(ch)
    	{
        	case 1: printf("enter the number of emp\n");
                	scanf("%d",&n);
                	for(i=0;i<HZ;i++)
                    	h[i].key=-1;
                	fp=fopen("k1.txt","w");
                	insert(fp,h,n);
                	fclose(fp);
                	break;
        	case 2: fp=fopen("k1.txt","r");
                	display(fp,h);
					fclose(fp);
                	break;
        	case 3: fp=fopen("k1.txt","r");
					search(fp,h);
					fclose(fp);
                	break;
        	case 4: exit(0);
    	}
   	 
	}
}