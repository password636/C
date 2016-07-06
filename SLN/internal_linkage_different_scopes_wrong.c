#include <stdio.h>

int main(void)
{
	extern int i;	// external linkage
	printf("%d\n", i);
	return 0;
}

static int i = 2;	// internal linkage. static declaration of ‘i’ follows non-static declaration
/* 
 * If, within a translation unit, the same identifier appears with both internal and external
 * linkage, the behavior is undefined.
 */
