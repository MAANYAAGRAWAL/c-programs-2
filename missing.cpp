#include<stdio.h>
int main()
{
	int a[5]={};
	int i,j,n,s=0,k;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(j=0;j<5;j++)
	{
		s=s+a[j];
	}
	n=21;
	k=n-s;
	printf("the missing num is %d",k);
}
