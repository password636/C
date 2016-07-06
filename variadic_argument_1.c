#include <stdarg.h>
#include <stdio.h>

void miniprintf(char *fmt, ...)
{
	va_list ap;
	char *p;
	int ival;
	char *sval;
	double dval;

	va_start(ap, fmt); // use the final named argument to initialize, `fmt' in this case.
	for ( p=fmt; *p; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			continue;
		}
		switch (*++p)
		{
			case 'd':
				ival = va_arg(ap, int);// va_arg has side effect: advance ap to next argument
				printf("%d", ival);
				break;
			case 'f':
				dval = va_arg(ap, double);
				printf("%f", dval);
				break;
			case 's':
				for (sval = va_arg(ap, char *); *sval; sval++)// know that ap points to the starting byte
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
