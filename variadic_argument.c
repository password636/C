#include <stdarg.h>	// va_list, va_start(), va_arg(), va_end()
#include <stdio.h>

void myprint(const char *p, const char *pp, ...)
{
        va_list ap;	// declare an iterator
        va_start(ap, pp);// initialize the iterator 

        int i = va_arg(ap, int);        // step through, interprete by type-name, advance to next
        char *s = va_arg(ap, char *);   // va_arg() cannot stop automatically, you stop
        printf("argument list:\n%s %s %d %s\n", p, pp, i, s);
        va_end(ap);     // destory the iterator, clean up
}


int main(int argc, char **argv)
{

        myprint("hello", "world", 10, "there");
        return 0;
}
