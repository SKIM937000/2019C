#include<stdio.h>
main()
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a/100;
c=(a-(a/100)*100)/10;	d=a%10;
	printf("%d%d%d",d,c,b);
}