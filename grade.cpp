#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,t;
    char g,A,B,C,D,E,F;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	t=((a+b+c+d+e)/5);
	if(t>=90)
	g=A;
	else if (t>=80 && t<90)
	g=B;
	else if (t>=70 && t<80)
	g=C;
	else if (t>=60 && t<70)
	g=D;
	else if (t>=50 && t<60)
	g=E;
	else
	g=F;
	printf("the percentage of student is %f",t,"%%");
	printf("the grade of the student is %c",g);
}
