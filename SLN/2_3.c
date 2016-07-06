#include <stdio.h>

static int i = 2;	
static int i;	
static int i;	
int main(void)
{
	extern int i;
	printf("%d\n", i);
	return 0;
}

