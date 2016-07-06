#include <stdio.h>

int out = 1;

int main(void)
{
	int out = 2;	// block-scope object name, no 'extern' -> no linkage
	printf("%d\n", out);
	extern int out;	// extern declaration of ‘out’ follows declaration with no linkage
	printf("%d\n", out);
	return 0;
}
