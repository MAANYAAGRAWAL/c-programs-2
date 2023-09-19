#include<stdio.h>
#include<math.h>
int main()
{
	int d,m,y,i;
	scanf("%d%d%d",&d,&m,&y);
	if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&& d<31))
	printf("%d %d %d",d+1,m,y);
	elif((m==4||m==6||m==9||m==11)&& d<30)
	printf("%d %d %d",d+1,m,y);
	elif((m==2)&& (y%4==0 &&(y%100!=0||y%400==0))&& d<29)
	printf("%d %d %d",d+1,m,y);
	elif(m=2 && y%4!=0 && d<28)
	printf("%D %d %d",d+1,m,y)
	
}
