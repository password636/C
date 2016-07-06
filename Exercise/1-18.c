#include <stdio.h>
#define MAXLINE 10

int readline(char line[], int lim);
int main(int argc, char **argv)
{
	int len;
	char line[MAXLINE];
	int i;
	while( (len=readline(line, MAXLINE)) > 0)
	{
		for(i = len - 2; i >= 0 && (line[i] == ' ' || line[i] == '\t' ); i--)
			;
		if(i >= 0)
		{
			line[i+1] = '\0';
			printf("%s", line);
			printf("\n");
		}
	}
	return 0;
}

int readline(char line[], int lim)
{
	int c;
	int i = 0;
	while( (c=getchar()) != EOF && c != '\n' && i<lim-2 )
	{
		line[i++] = c;
	}	
	if(c != EOF)	
	{
		if(i == lim - 2)
		{
			while(getchar()!= '\n');
		}
		
		line[i++] = '\n';	
		line[i] = '\0';	
	}
	return i;
}
