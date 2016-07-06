#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char buffer[100];
	char *s = strcpy(NULL, NULL);
	printf("%s\n", s);
	return 0;
}
