#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nAge = 0, bill = 1000;
	scanf_s("%d", &nAge);
	if (nAge < 20)
		bill = bill * 0.75;
	if (nAge >= 20)
		nAge = 20;

	printf("나이 : %d, 최종요금 : %d",nAge, bill);
	return 0;
}
