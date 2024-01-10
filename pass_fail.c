#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int point = 0;
	scanf_s("%d", &point);
	printf("%s\n",
		(point >= 80) ? "합격" : "불합격"
		);
	return 0;
}
