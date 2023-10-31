#include<stdio.h>
int main()
{
	int a[5]={1,3,2,4,5};
	int i,j,t;
	for(i=0;i<5;i++)
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
	printf("the greatest element is %d",a[4]);
	printf("the min is %d",a[0]);
	printf(" the avg is %d",a[2]);
}
