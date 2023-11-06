#include<stdio.h>
#include<math.h>
int main()
{
	int a=0,b=1,n,s,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    s=a+b;
		a=b;
		b=s;
	}
	printf("%d",a);
}
