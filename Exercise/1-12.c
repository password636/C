#include <stdio.h>
#define IN  1
#define OUT 0

int main(int argc, char **argv)
{
	int c;
	int state = IN;
	
	while ((c = getchar()) != EOF)
	{
		if (state == OUT && (c == ' ' || c == '\t' || c == '\n'))
		{
			putchar('\n');
			state = IN;
		}
		if (state == IN)
		{
			if (c == ' ' || c == '\t' || c == '\n')
				continue;
			else
				state = OUT;
		}
		putchar(c);
	}
	return 0;
}
