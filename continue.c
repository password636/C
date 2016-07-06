#include <stdio.h>

int main(void)
{
	int i;
	for (i=0; i<10; i++)
	{
		printf("%d\n", i);
		continue;	// continue would skip the rest
		printf("never got a chance to output\n");
	}
	return 0;
}
