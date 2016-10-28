#include <stdio.h>

int node = 11;
int main(int argc, char **argv)
{
	int node = 10;
	// only inner `node' is visible
	printf("%d\n", node);
	return 0;
}
