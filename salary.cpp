#include<stdio.h>
#include<math.h>
int main()
{
	float b,r,a,g;
	scanf("%f%f",&b,&r);
	if (r==1)
	a=0.27*b;
	else if(r==2)
	a=0.24*b;
	else if (r==3)
	a=0.16*b;
	else 
	a=0.12*b;
    g=b+a+(0.48*b)+(0.08*b);
    printf("the gross is %f",g);
}
