#include<stdio.h>
int main()
{
	int units=0;
	char name[20];
	float total=0;
	printf("Enter name\n");
	scanf("%s",name);
	printf("Enter no of units consumed\n");
	scanf("%d",&units);
	if(units>=0 && units<=200)
		total=units*.8;
	else if(units>200 && units<=300)
		total=(200*.8)+((units-200)*.9);
	else
		total=(200*.8)+(100*.9)+(units-300);	
	total+=100;
	if(total>400)
		total+=(total*.15);
	printf("Consumer %s\n",name);
	printf("Units consumed %d\n",units);				
	printf("Amount %.2f\n",total);	
	return 0;
}
