#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b,b==c)
	printf("equilateral");
	else if(a==b||a==c||b==c)
	printf("isosceles");
	else
	printf("scalene");
	
}
