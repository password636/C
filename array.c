#include <stdio.h>

int main(void)
{
/*
 * write an array with an uncertain number of elements
 * by leaving c-e out.
 */
	char *s[] = {"hello", "how", "are", "you"};
	int a[] = {1,2,3,4};

	int i;
	for (i=0; i<4; i++ )
	{
		printf("%s\n", s[i]);
	}
	for (i=0; i<4; i++ )
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
