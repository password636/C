#include <stdio.h>

/* "declare-use first, define later" for functions
 */

void a(void);
void b(void);

int main(void)
{
	a();
	b();
	return 0;
}
void a(void)
{
	extern int i;	// well encapsulated
	printf("%d\n", i);
}

void b(void)
{
	extern int i;	// well encapsulated
	printf("%d\n", i);
}
