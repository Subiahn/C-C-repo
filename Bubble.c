#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr1[5] = { 30, 40, 10, 50, 20 };


	for (int i = 0; i < 5; ++i)
		printf("%d\t", arr1[i]);
	putchar('\n');

	for (int j = 0; j < 5; ++j) 
	{
		for (int i = j + 1; i < 5; ++i)
		{
			if (arr1[j] > arr1[i])
			{
				int tmp = arr1[j];
				arr1[j] = arr1[i];
				arr1[i] = tmp;
			}
		}

		for (int i = 0; i < 5; ++i)
			printf("%d\t", arr1[i]);
		putchar('\n');
	}

	return 0;
}
