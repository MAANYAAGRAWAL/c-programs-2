#include<stdio.h>
#include<math.h>
int main ()
{
	float p,r,t;
	scanf("%f%f%f",&p,&r,&t);
	printf("the simple interest is %f",(p*r*t/100));
	printf("the compound interest is %f",(p*pow(1+1/r,t)));
	
}
