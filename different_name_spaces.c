#include <stdio.h>

/* Note that after all be written, label 'milan' is visible from the top, but it's not visible 
   when writing the first four 'milan'
*/
int main(void)
{
	float milan = 1.2;	

	struct milan		// milan(float) is visible, doesn't matter
	{
		int milan;	// milan(float, struct) are visible, doesn't matter
		char c;
	} myMilan = {1, 'A'};;

	struct inter
	{
		double milan;	// milan(float, struct, int) are visible, doesn't matter
	} myInter = {2.3};
				// milan(float, struct, int, double) are visible, doesn't matter
	printf("%g\n", milan);
	printf("%d\n", myMilan.milan);
	printf("%g\n", myInter.milan);
	goto milan;

milan:	printf("end\n");	// milan(float, struct, int, double) are visible, doesn't matter

	return 0;
}

