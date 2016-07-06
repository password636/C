#include <stdio.h>
#define TABCOLUMN 8

int detab(int count);
int main(int argc, char **argv)
{
	int c;
	int count = 0;

	while((c=getchar()) != EOF)	
	{
		if(c != '\n')
		{
			count++;
			if(c == '\t')
				count += detab(--count);
		}
		else
			count = 0;
		if(c != '\t')
			putchar(c);
	}
	return 0;
}

int detab(int count)
{
	int h = TABCOLUMN - (count % TABCOLUMN);
	int i;
	for(i = 0; i<h; i++)
		putchar(' ');
	return h;
}

