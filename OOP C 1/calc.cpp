#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b,ans;
	char op;
	printf("Enter an expression\n");
	scanf("%f%c%f",&a,&op,&b);
	switch(op)
	{
		case '+':
			ans=a+b;
			break;
		case '-':
			ans=a-b;
			break;
		case 'x':
		case '*':
			ans=a*b;
			break;
		case '/':
		if(b==0)
			{
				printf("Zero division error\n");
				exit(0);
			}
			ans=a/b;
			break;
		default:
			printf("Invalid");
			exit(0);
			break;
	}
	printf("Answer is %.2f",ans);
	return 0;
}
