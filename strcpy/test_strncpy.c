#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char buffer[100];
	char src[5] = {'a', 'b', '\0', 'c'};
	//char *s = strncpy(buffer, "abcde", 4);
	//printf("%s\n", s);
	//printf("%s\n", buffer);
	strncpy(buffer, src, 4);
	printf("%s\n", buffer);
	printf("%c\n", buffer[3]);
	return 0;
}
