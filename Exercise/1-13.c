#include <stdio.h>
#define IN	1	// inside a word
#define OUT	0	// outside a word
#define WORDNUM	100
int main(int argc, char **argv)
{
	int c, count = 0, i = 0;
	int state = OUT;
	int lw[WORDNUM];

	while ((c = getchar()) != EOF)
	{
		if (state == IN)
		{
			if (c == ' ' || c == '\t' || c == '\n')
			{
				state = OUT;
				lw[i++] = count;
				//printf("%d: %d characters\n", i, count);
			}
			else
				count++;
		}
		else if ( c !=  ' ' && c != '\t' && c != '\n')	
		{
			state = IN;
			count = 1;
		}
	}

	int j, k;
	//printf("%d words\n", i);
	for(j = 0; j < i; j++)
	{
		for (k = 0; k < lw[j]; k++)
			putchar('|');
		putchar('\n');
	}
	return 0;
}
