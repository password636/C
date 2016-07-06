#include <stdio.h>

int main(void)
{
	int array[5];
	size_t s = sizeof array;	// return type 
	printf("%d\n", s);		// number of bytes, 4*5=20

	char buf[] = "hello, world";
	s = sizeof buf;
	printf("%d\n", s);		// 13, including '\0'

	char *buf1 = "hello, world";
	s = sizeof buf1;
	printf("%d\n", s);		// 4, the pointer size, not the array
	return 0;

/*
 * 1. must use [] in declaration
 * 2. doesn't return number of elements
 */
}
