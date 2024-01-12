#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 0, b = 0, c = 0, max = 0;
	scanf_s("%d%d%d", &a,&b,&c);
	max = (a > b) ? a : b;
	max = (c > max) ? c : max;
	printf("MAX: %d\n", max);
	return 0;
}
