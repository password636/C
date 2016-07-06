#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

void reverse(char *s);
int readline(char line[], int lim);
int main(int argc, char **argv)
{
	int len;
	char line[MAXLINE];
	
	while((len=readline(line, MAXLINE)) > 0)
	{
		line[len-1] = '\0';
		reverse(line);
		printf("%s\n", line);
	}
	
	return 0;
}

void reverse(char *s)
{
	int len = strlen(s);
	char tmp[len];
	int i = 0, j = len - 1;

	while(j>=0)
	{
		tmp[i++] = s[j--];
	}
	tmp[i] = '\0';
	
	i = 0;
	while(i<len)
	{
		s[i++] = tmp[i];
	}
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

