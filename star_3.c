#include <stdio.h>
#include <stdlib.h>

int main(void) {

	for (int j = 0; j < 5; ++j)
	{
		for (int i = 0; i < 5; ++i)
		{
			if (i >= 4 - j)
				printf("* ");
			else
				printf("  ");
		}
		putchar('\n');
	}
	return 0;
}
