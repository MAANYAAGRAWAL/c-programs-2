#include<stdio.h>
int main()
{
	int a[7]={1,2,3,6,3,6,1};
	int j,k;
	for(j=0;j<7;j++)
	{
		for(k=0;k<7;k++)
		{
			if(a[j]==a[k])
			printf("%d",a[k]);
		}
	}
	
	
}
