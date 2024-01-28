#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr1[5] = {30, 40, 10, 50, 20};
	int idxMin = 0;
	for (int j = 0; j < 4; ++j) {
		idxMin = j;
		for (int i = 0; i < 5; ++i)
		{
			if (arr1[idxMin] > arr1[i])
				idxMin = i;
		}
		if (idxMin != j)
		{
			int tmp = arr1[j];
			arr1[j] = arr1[idxMin];
			arr1[idxMin] = tmp;
		}
	}
	for(int i = 0; i < 5; ++i)

		printf("%d\t", arr1[i]);
	putchar('\n');
	return 0;
}
