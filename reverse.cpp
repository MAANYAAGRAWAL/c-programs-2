#include<stdio.h>
#include<math.h>
int main()
{
	int n,r=0,c,i,t;
	scanf("%d",&n);
		while(n!=0)
	{
		n=n/10;
		c++;
	}
	for(i=0;i<=c;i++)
	{
	t=n%10;
	r=r+t;
	r=r*10;
    }
	printf("%d",r);
	
}
