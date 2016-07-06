#include <stdio.h>

int i;
int i = 1;
int i;
int i;		// the same entity, multiple declarations
//char i;	// the type `char' shows that this `i' wants to designate a different entity.

int main(void)
{
	printf("%d\n", i);
	return 0;
}
