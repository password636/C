#include <stdio.h>

float myfunc(void); // `myfunc' is "function returning float"

int main(void)
{
	// assignment
	// `h' and `i' are "pointer to function returning float"
	float (*h)(void) = &myfunc;	// normal way, no pointer conversion for `myfunc' because it is &'s operand
	float (*i)(void) = myfunc;	// pointer conversion, `myfunc' is "pointer to function returning float"

	// call by pointers
	printf("%g\n", (*h)());		// traditional way to call
	printf("%g\n", (*i)());
	printf("%g\n", h());		// new way to call
	printf("%g\n", i());
	return 0;
}

float myfunc(void)
{
	return 19.02;
}
