#include <stdio.h>

struct myStruct
{
	int i;
	int j;
};
int main(void)
{
	const struct myStruct s1 = {9, 10}; // s1 is a constant structure
	printf("%d\n", s1.i);
	printf("%d\n", s1.j);
	s1.j = 11;	// error: assignment of read-only variable ‘s1’
	printf("%d\n", s1.j);
	return 0;
}

