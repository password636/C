#include <stdio.h>

int i;
int i = 1;
int i;
int i;

int main(void)
{
	extern int i;
	extern int i;
	extern int i;
	printf("%d\n", i);
	return 0;
}
