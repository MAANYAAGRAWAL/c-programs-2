#include<stdio.h>
int main()
{
	int a,b;
    scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a is %d",a);
	printf("the value of b is %d",b);	
}
