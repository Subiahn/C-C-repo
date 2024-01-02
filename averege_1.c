#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	scanf_s("%d%d", &x, &y);

	double avg = 0.0;
	avg = (x + y) / 2.0;
	printf("%.2f", avg);
	return 0;

}