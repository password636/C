#include <stdio.h>

void a(void);
void b(void);

int main(void)
{
	a();
	b();
	return 0;
}
void a(void)
{
	int i = 1;
	printf("%d\n", i);
}

void b(void)
{
	int i = 2;
	printf("%d\n", i);
}
