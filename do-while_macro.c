#include <stdio.h>

// this macro must NOT use ;
#define myprint(int)\
	printf("%d\n", (int))
// this macro must use ; and do-while
#define increment(arg)\
	do { (arg)++; } while (0)

int main(void)
{
	int i = 11;
	myprint(i);
	increment(i);
	myprint(i);
	return 0;
}
