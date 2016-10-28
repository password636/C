#include <stdio.h>

void myprint(char *s)
{
	printf ("%s\n", s);
}

void passme( void f(char *), char *s)
{
	f(s);
}

int main(int argc, char **argv)
{
	passme(myprint, "Hello, world!");
	return 0;
}

