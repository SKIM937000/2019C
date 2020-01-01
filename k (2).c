#include<stdio.h>
#include<string.h>
void reverse (char s[20])
{
	int i;
	char a;
	int t;
t=strlen(s);
	for(i=t;i>t/2;i--)
	{	
		a=s[t-i];
	s[t-i]=s[i-1];
	s[i-1]=a;
	}

}
