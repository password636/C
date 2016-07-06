#include <stdio.h>
#include <assert.h>
int my_strcmp(const char *dest, const char *source)  
{  
   assert((NULL != dest) && (NULL != source));  
   while (*dest && *source && (*dest == *source))  
           {  
                    dest ++;  
                   source ++;  
           }  
   return *dest - *source;  
}
int main(int argc, char **argv)
{
	//printf("%d\n", my_strcmp(argv[1], argv[2]));
	printf("%d\n", my_strcmp(NULL, NULL));
	return 0;
}

