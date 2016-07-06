#include <stdio.h>
#include <string.h>

char *my_strncpy(char *dest, const char *src, size_t n)
{
	int i,j ;
	for (i=0; i<n; i++)
		if ( (*(dest+i) = *(src+i)) == '\0')
			break;
	for (j=i+1; j<n; j++)
		*(dest+j) = '\0';
	return dest;
}
char *my_strncpy1(char *dest, const char *src, size_t n)
{
	size_t i;

        for (i = 0 ; i < n && src[i] != '\0' ; i++)
        	dest[i] = src[i];
        for ( ; i < n ; i++)
        	dest[i] = '\0';

        return dest;
}


int main(int argc, char **argv)
{
	char buffer[100];
	char *s = strncpy(buffer, "suck", 5);
	printf("%s\n", buffer);
	printf("%s\n", s);

	s = my_strncpy(buffer, "suck", 5);
	printf("%s\n", buffer);
	printf("%s\n", s);
	return 0;
}
