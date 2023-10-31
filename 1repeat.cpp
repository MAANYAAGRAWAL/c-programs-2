#include<stdio.h>
int main()
{
	int a[]={10,3,5,4,3,5,10};
	int i,j,k;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(a[i]==a[j])
			{
			printf("%d",a[j]);
		}
			break;
		}
	}
}
