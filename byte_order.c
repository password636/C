#include <stdio.h>

int main(void)
{
	int i = 0x04030201;
	int *pi = &i;
	char *cp = (char *)pi;
	int j;
	for(j=0;j<4;j++)
		printf("%x\n", cp[j]);
	return 0;
}
