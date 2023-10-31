#include<stdio.h>
int main()
{
	int a[5]={1,3,4,2,5};
	int i,j,t,k;
	scanf("%d",&k);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	printf("the kth largest element is %d",a[5-k]);
	printf("the kth smallest is %d",a[1]);
}
