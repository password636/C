#include <stdio.h>

int i = 1;

int main(void)
{
	extern int i;	// 
	printf("%d\n", i);
	return 0;
}
