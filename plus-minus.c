#include <stdio.h>
int main(void) {
	int a = 0, b = 0;
	int result = 0;
	scanf_s("%d%d", &a, &b);
	//result = a - b;
	//result = a - b;
	result = a + (~b + 1); // 2 의 보수 ;
	printf("%d\n", result);
	return 0;
}