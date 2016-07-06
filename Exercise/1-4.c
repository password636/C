#include <stdio.h>

int main(void)
{
	int low = -17;
	int high = 148;
	int step = 11;
	int cels = low;
	float fahr;
	printf("%3s %6s\n", "cel", "fah");
	while (cels <= high)
	{
		fahr = 9.0/5.0*cels+32;
		printf("%3d %6.1f\n", cels, fahr);
		cels += step;
	}
	return 0;
}
