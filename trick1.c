#include <stdarg.h>
#include <stdio.h>

void miniprintf(char *fmt, ...)
{
	va_list ap;
	char *p;
	int ival;
	char *sval;
	double dval;

	va_start(ap, fmt); 
	for ( p=fmt; *p; p++)// '\0' integer character constant, value is 0
	{
		if (*p != '%')
		{
			putchar(*p);
			continue;
		}
		switch (*++p)
		{
			case 'd':
				ival = va_arg(ap, int);
				printf("%d", ival);
				break;
			case 'f':
				dval = va_arg(ap, double);
				printf("%f", dval);
				break;
			case 's':
				for (sval = va_arg(ap, char *); *sval; sval++) // '\0' vs. 0
					putchar(*sval);
				break;
			default:
				putchar(*p);
				break;
		}
	}
	va_end(ap);
}

int main(void)
{
	miniprintf("will print something\n");
	miniprintf("now %d %s %f\n", 10, "hello, world!", 9.9);
	return 0;
}
