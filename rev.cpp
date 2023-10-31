#include<stdio.h>
int main()
{
	int a[]={1,3,4,2,5};
	int j,t,k;
	
		for(j=0;j<2;j++)
		{
			t=a[j];
			a[j]=a[4-j];
			a[4-j]=t;
		}
		
	
	for(k=0;k<5;k++)
	printf("%d",a[k]);
}
