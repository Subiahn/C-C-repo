#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;
	printf("두 정수를 입력 하세요 :");
	scanf_s("%d%d", &x, &y);

	double avg = 0.0;
	avg = (x + y) / 2.0;
	printf("AVG : %.2f",avg);
	return 0;

}