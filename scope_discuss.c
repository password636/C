#include <stdio.h>

int a = 3;
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

