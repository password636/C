#include <stdio.h>

struct myStruct
{
	char c;
	int i;
};
int main(void)
{
	struct myStruct array[] = {	// initialize an array of structure
		{'A', 0x41},
		{'B', 0x42},
		{'C', 0x43},
	};
	printf("%c\n", array[0].c);
	printf("%x\n", array[0].i);
	printf("%c\n", array[1].c);
	printf("%x\n", array[1].i);
	printf("%c\n", array[2].c);
	printf("%x\n", array[2].i);
	return 0;
}

