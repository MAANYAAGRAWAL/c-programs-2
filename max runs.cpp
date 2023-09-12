#include<stdio.h>
int main ()
{ 
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if (a>b && a>c)
	printf("%f",a);
	else if (b>c)
	printf("%f",b);
	else
	printf("%f",c);
}
