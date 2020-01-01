#include<stdio.h>
#include<string.h>
void reverse (char s[20])
{
	int i;
	char a;
	int t;
/*t=strlen(s);*/

for(i=0;s[i]='\0';i++)
t=i;
	for(i=t;i>t/2;i--)
	{	
		a=s[t-i];
	s[t-i]=s[i-1];
	s[i-1]=a;
	}

}
//StudybarCommentBegin
main()
{char s[20];
 gets(s);
 reverse(s);
 puts(s);
}
//StudybarCommentEnd
