#include <stdio.h>


typedef void (*ptrFuncType)(void);

void justPrnt(void)
{
	printf("How's it going?\n");
}

ptrFuncType getFuncPtr(void) 
{
	return justPrnt;
}

int main(void)
{
	getFuncPtr()();
	return 0;
}
