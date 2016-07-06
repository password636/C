#include <stdio.h>

int main(void)
{
	extern int out = 1;
	printf("%d\n", out);
	return 0;
}
