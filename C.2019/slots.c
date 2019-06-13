#include <stdio.h>

int add(int i, int j)
{
    return i + j;
}

int multiply(int i, int j)
{
    return i * j;
}

typedef int (*func_ptr)(int, int);

typedef struct {
    func_ptr tp_getattr;
} pyobject;

void install(pyobject *o, func_ptr p)
{
    o->tp_getattr = p;
}

int main(int argc, char **argv)
{
    pyobject obj;
	pyobject *a = &obj;
    
    install(a, &add);
    printf("%d\n", (*a->tp_getattr)(4, 4));

    install(a, &multiply);
    printf("%d\n", (*a->tp_getattr)(4, 4));

    return 0;
}
