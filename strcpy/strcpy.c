#include <stdio.h>
#include <string.h>

char *my_strcpy(char *dst, const char *src)
{
	char *ddst = dst;
	while (*src != '\0')
		*ddst++ = *src++;
	*ddst = '\0';
	return dst;
}

char *my_strcpy_1(char *dst, const char *src)
{
	char *ddst = dst;
	while ( (*ddst++ = *src++) != '\0')
		;
	return dst;
}


int main(int argc, char **argv)
{
	char buffer[100];
	char *s = my_strcpy(buffer, "suck");
	printf("%s\n", buffer);
	printf("%s\n", s);
	s = my_strcpy_1(buffer, "suck");
	printf("%s\n", buffer);
	printf("%s\n", s);
	my_strcpy_1(NULL, NULL);
	return 0;
}
