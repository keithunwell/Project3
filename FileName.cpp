#include <stdio.h> 

int main(void)
{
	int x, y;

	x = 1;
	printf("x+1 output:%d\n", x + 1);
	printf("y=x+1output:%d\n", y = x + 1);
	printf("y=10+(x=2+7)output:%d\n", y = 10 + (x = 2 + 7));
	printf("y=x=3output%d\n", y = x = 3);

	return 0;
}