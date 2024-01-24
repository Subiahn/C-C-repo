#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nMax = 0;
	int arr1[5] = {50, 40, 10, 50, 20};

	for (int i = 0; i < 5; i++)
	{
		if (arr1[i] > nMax)
			nMax =  arr1[i];
	}

	
	printf("Max: %d\n", nMax);
	return 0;
}