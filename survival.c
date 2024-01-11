#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nInput = 0, max = 0;
	scanf_s("%d", &nInput);
	max = nInput;
	scanf_s("%d", &nInput);
	max =(max > nInput) ? max : nInput;
	scanf_s("%d", &nInput);
	max = (max > nInput) ? max : nInput;
	printf("MAX: %d\n", max);
	return 0;
}
