#include <stdio.h>

/* "declare-use first, define later"
 * just like the way functions usually do
 */
int i;
int main(void)
{
	printf("%d\n", i);
	return 0;
}
int i = 1;
