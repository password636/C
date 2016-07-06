#include <stdio.h>

int main(int argc, char **argv)
{
	int symbol = 0;
	int enter = 0;
	int c;
	int lastChar = 'a';

	while((c = getchar()) != EOF)
	{
		if (c == ' ' && lastChar == ' ')
			continue;	// this causes lastChar not assigned for every c, actually a wrong place. 
		putchar(c);
		lastChar = c;
	}
        return 0;
}
