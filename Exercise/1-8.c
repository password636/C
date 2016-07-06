#include <stdio.h>

int main(int argc, char **argv)
{
	int c;
	long nb = 0, nt = 0, nn = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			nb++;
		else if (c == '\t')
			nt++;
		else if (c == '\n')
			nn++;
	}
	printf("%ld blanks, %ld tabs, %ld lines\n", nb, nt, nn);
	return 0;
}
