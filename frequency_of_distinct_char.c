#include<stdio.h>
#include<string.h>
void freq(char *s)
{
	int i,j,c;
	char d;
	int len=strlen(s);
	for(i=0;i<len;i++)
	{
		c=0;
		d=s[i];
		for(j=0;j<len;j++)
		{
			if(s[j]==d)
			{
				c++;
				s[j]='#';
			}
		}
		if(d!='#')
		printf("\nfrequency of %c is =%d",d,c);
	}
	
}
int main()
{
	char s[50];
	printf("enter the string :");
	scanf("%s",s);
	freq(s);
}