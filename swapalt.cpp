#include<stdio.h>
int main()
{
	int a[]={1,3,4,2,5};
	int j,t,k;
	
		for(j=0;j<4;j+=2)
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
		
	
	for(k=0;k<5;k++)
	printf("%d",a[k]);
}
