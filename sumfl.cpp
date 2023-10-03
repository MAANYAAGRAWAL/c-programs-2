#include<stdio.h>
int main ()
{
	int t,n,f,l;
	scanf("%d",&n);
	l=n%10;
	while(n!=1||n!=3||n!=4||n!=5||n!=6||n!=7||n!=8||n!=9)
	{
		n=n/10;
	}
	f=n%10;
	t=f+l;
	printf("%d",t);
}



	
