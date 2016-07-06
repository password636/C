#include <stdio.h>

long power(int m, int n);

int main(int argc, char **argv)
{
	int i;
	for (i=0;i<10;i++)
		printf("%d %d %d\n", i, power(2,i), power(-3,i));
	return 0;
}

long power(int m, int n)
{
	long p = 1;
	int i;
	for(i = 0; i < n; i++)
		p *= m;
	return p;
		
}
