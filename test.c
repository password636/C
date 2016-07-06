#include <stdio.h>

static int aa();


int main(void)
{
int bb;
//{
int *bb;
//}

//extern int abc;
	extern int aa ();
	struct milan {int i, j;};
	int milan = 10;
	printf("%d\n", aa());
//	printf("%d\n", abc);
	
	return 0;
}

int aa(){return 1;}
