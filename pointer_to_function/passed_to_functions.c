#include <stdio.h>

int doWork(void)
{
	return 9;
};

int inHere(int (*ptrFunc)(void)) // receive a "pointer to function(void) returning int" argument
{
	return (*ptrFunc)();
}

int main(void)
{
	printf("%d\n", inHere(&doWork));
	printf("%d\n", inHere(doWork));
	return 0;
}
