#include <stdio.h>
#include <stdlib.h>

void find_first_one(int x, int * yy);

int main(int argc, char * argv[])
{
	int ret;

	find_first_one(0xF0, &ret);

	printf("ret = %d \r\n", ret);
}


void find_first_one(int x, int * yy)
{
	if (x == 1) {
		(*yy) = 1;
	} else if (x > 1) {
		find_first_one(x >> 1, yy);
		(*yy)++;
	} else {
		(*yy) = 0;
	}
}

