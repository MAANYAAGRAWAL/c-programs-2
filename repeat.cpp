#include<stdio.h>
int main()
{
	int a[5]={};
	int i,k,j,c=0;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	scanf("%d",&k);
	for(j=0;j<5;j++)
	{
		if(a[j]==k)
		c++;
	}
	printf("%d",c);
	
}
