#include <stdio.h>
#include <stdlib.h>

int main(void) {

	for (int j = 0; j < 5; ++j)
	{
		for (int i = 0; i < j + 1; ++i) 
			printf("* ");
		putchar('\n');

	}
	return 0;
}
