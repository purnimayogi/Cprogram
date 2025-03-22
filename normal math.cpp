#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any two number:\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Sum=%d ",c);
	c=a-b;
	printf("Subtraction=%d ",c);
	c=a*b;
	printf("Multiply=%d ",c);
	c=a/b;
	printf("Divide=%d ",c);
	return 0;
}
