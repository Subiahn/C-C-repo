#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nAge = 0;
	double rate = 0.0;
	scanf_s("%d", &nAge);
	if (nAge < 14) {
		if (nAge < 4)
			rate = 0.0;
		else rate = 0.5;
	}
	else 
		if (nAge >= 20)
		rate = 1.0;
	else rate = 0.75;

	double fee = 1000 * rate;
	printf("Fee: %d", (int)fee);

	return 0;
}
