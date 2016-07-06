#include <stdio.h>

int main(int argc, char **argv)
{
	long nl = 0, nw = 0, nc = 0;
	int c;
	int lastChar = ' ';

	while ((c = getchar()) != EOF)
	{
		nc++;
		if (c == '\n')
			nl++;
		if(lastChar != ' ' && lastChar != '\t' && lastChar != '\n' && (c == ' ' || c == '\t' || c == '\n'))
			nw++;
		lastChar = c;
	}
	printf("%ld lines, %ld words, %ld characters\n", nl, nw, nc);
	return 0;
}
