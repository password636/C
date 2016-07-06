#include <stdio.h>

int my_strcmp( const char * src, const char * dst) 
{ 
	int ret = 0 ; 
	while( ! (ret = *src - *dst) && *src) 
		++src, ++dst; 
	
	if ( ret < 0 ) 
		ret = -1 ; 
	else if ( ret > 0 ) 
		ret = 1 ; 
	
	return( ret ); 
} 
int main(int argc, char **argv)
{
	printf("%d\n", my_strcmp(argv[1], argv[2]));
	return 0;
}

