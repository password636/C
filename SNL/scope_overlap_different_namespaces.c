#include <stdio.h>

struct node
{
	int i;
	struct node *next;
};

int main(int argc, char **argv)
{
	int node = 10;
	// two `node's are both visible
	printf("%d\n", node);
	struct node myNode = {20, NULL};
	printf("%d\n", myNode.i);
	return 0;
}
