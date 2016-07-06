#include <stdio.h>

// nested scope is built by compound-statement
int a = 1;
void fff(void)
{			
	float a = 1.2;	// the first nested scope built
	{
		double a = 2.3;	// the second netsted scop built
		printf("%g\n", a);	// only a(double)
	}
	printf("%g\n", a);	// only a(float)
}
// only a(int)
int main(void)
{
	fff();
	printf("%d\n", a);
	return 1;
}

