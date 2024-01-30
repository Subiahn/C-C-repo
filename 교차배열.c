#include <stdio.h>

int main(void) {
	int aList[5][5] = {0};
	int cnt = 0;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (i % 2 == 0)
				aList[i][j] = ++cnt;
			else
				aList[i][4 - j] = ++cnt;
		}
	}	
	
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}
	return 0;
}
