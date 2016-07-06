#include <stdio.h>

extern int a;
static int a;
void fff(void)
{
	extern int a;
	printf("%d\n", a);
}

void ggg(void)
{
	extern int a;
	printf("%d\n", a);
}
int main(void)
{
	fff();
	ggg();
	return 1;
}

