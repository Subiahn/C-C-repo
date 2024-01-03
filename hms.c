#include <stdio.h>

int main(void)
{
	int x = 0;
	printf("초를 입력 하세요 :");
	scanf_s("%d", &x);
	int hour = 0 , min = 0, sec = 0;
	hour = x / 3600;
	min = (x % 3600) / 60;
	sec = x % 60;


	printf("%02d:%02d:%02d\n", hour,min,sec);
	return 0;

}