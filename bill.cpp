#include<stdio.h>
#include<math.h>
int main()
{
	int m;
	scanf("%d",&m);
	if (m<100)
	printf("the bill is %d",m*2);
	else if (100<m<250)
	printf("the bill is %d",m*5);
	else
	printf("the bill is %d",m*7);
}
