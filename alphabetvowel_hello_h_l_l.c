#include<stdio.h>
int main()
{
	char s[101];
	scanf("%s",s);
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='u'&&s[i]!='o')
		{
			printf(".%c",s[i]);
		}
		i++;
	}
}