#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if (a>b && a>c)
	printf("a is the greatest");
	else if (b>c)
	printf("b is greatest");
	else
	printf("c is greatest");
	
}
