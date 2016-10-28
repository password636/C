#include <stdio.h>

int node = 11;
char node = 'c';
int main(int argc, char **argv)
{
	// only inner `node' is visible
	printf("%d\n", node);
	return 0;
}
