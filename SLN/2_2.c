#include <stdio.h>

static int i = 2;	
int main(void)
{
	extern int i;
	printf("%d\n", i);
	return 0;
}

