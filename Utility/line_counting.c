# include <stdio.h>

int main(int argc, char *argv[])
{
	int c; 
	long nc = 0;

	while( (c = getchar()) != EOF )
		if (c == '\n')
			nc++;
	printf("%ld lines\n", nc);
	return 0;
}
