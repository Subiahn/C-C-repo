#include <stdio.h>
int main() {
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);

    int B100 = B / 100;
    int B10 = (B - 100 * B100) / 10;
    int B1 = B % 10;

    printf("%d\n", A * B1);
    printf("%d\n", A * B10);
    printf("%d\n", A * B100);

    printf("%d\n", A * B);
    return 0;

}