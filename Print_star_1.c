#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 0;

	for (int j = 0; j < 5; ++j)
	{
		for (int i = 0; i < 5; ++i) {
			printf("*");
		}
		printf("\n");
	}
	

	return 0;
}
