#include <stdio.h>

void a(void)
{
        extern int i;	//  
        printf("%d\n", i);
}

void b(void)
{
        extern int i;	// 
        printf("%d\n", i);
}
int main(void)
{
        extern int i;
        printf("%d\n", i);
	a();
	b();
        return 0;
}
int i = 2;
