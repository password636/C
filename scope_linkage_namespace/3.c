#include <stdio.h>

int i = 1;

int main(void)
{
	int i = 2;	// different scopes => different entity
	printf("%d\n", i);
	return 0;
}
