#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2;
	printf("Enter coefficients of a b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0 && b==0)
	{
		printf("Not a quadratic equation\n");
		exit(0);
	}
	else if(a==0)
	{
	printf("not a quadratic equation\n");
	printf("\nx=%.2f\n",(float)(-c/b));
	}
	else
	{
		d=(b*b)-(4*a*c);
		if(d<0)
		{
			printf("2 Imaginary roots exist\n");
			x1=-b/(2*a);
			x2=pow(abs(d),0.5);
			printf("Root 1 is %.2f + %.2fi\n",x1,x2);
			printf("Root 2 is %.2f - %.2fi\n",x1,x2);
		}
		else if(d==0)
		{
			printf("One real roots exists\n");
			x1=(-b+pow(d,0.5))/(2*a);
			printf("Root is %.2f",x1);
		}
		else
		{
			printf("Two real and distinct roots exist\n");
			x1=(-b+pow(d,.5))/(2*a);
			x2=(-b-pow(d,.5))/(2*a);
			printf("Root 1 is %.2f\n",x1);
			printf("Root 2 is %.2f\n",x2);		
		}
	}
return 0;
}
