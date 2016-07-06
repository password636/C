#include <stdio.h>
#define DIGITS	10

int main(int argc, char **argv)
{
	long nd[DIGITS], nw = 0, no = 0;
	int i, c;
	for(i = 0; i < DIGITS; i++)
		nd[i] = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
			nw++;
		else if (c >= '0' && c <= '9')
			nd[c - '0']++;
		else
			no++;
	}

	for(i = 0; i < DIGITS; i++)
		printf("%ld\n", nd[i]);
	printf("%ld whitespaces, %ld other characters\n", nw, no );
	return 0;
}
