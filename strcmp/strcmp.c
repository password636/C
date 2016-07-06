#include <stdio.h>

int my_strcmp(const char *s1, const char *s2)
{
	do 
	{
		if(*s1 < *s2)
			return -1;
		else if (*s1 > *s2)
			return 1;
		s1++;
		s2++;
	}
	while(*s1 != '\0' && *s2 != '\0');

	if ( *s1 == '\0' && *s2 != '\0' )
		return -1;
	else if (*s1 != '\0' && *s2 == '\0')
		return 1;
	else
		return 0;
}

int main(int argc, char **argv)
{
	//printf("%d\n", my_strcmp(argv[1], argv[2]));
	printf("%d\n", my_strcmp(NULL, NULL));
	return 0;
}

