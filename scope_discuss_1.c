#include <stdio.h>
int a = 9;
void fff(void)
{
	enum{ a};
	printf("%d\n", a);
}

void ggg(void)
{
	struct a {int i;} A = {19};
	printf("%d\n", A.i);
}
int main(void)
{
	fff();
	ggg();
	return 1;
}

