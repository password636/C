# include <stdio.h>

int myFunc(void)
{
	return 9;
}

int anotherFunc(void)
{
	return 10;
}

int main(void)
{
	int (*ptrArray[5])(void);// "array[5] of pointers to function(void) returning int"
	
	ptrArray[0] = &myFunc;
	ptrArray[1] = anotherFunc;

	printf("%d\n", (*ptrArray[0])());
	printf("%d\n", ptrArray[1]());
	return 0;
}
