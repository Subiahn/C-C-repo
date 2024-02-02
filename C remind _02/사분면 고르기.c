#include <stdio.h>

int main() {
    double x, y;

    scanf("%lf", &x);
    scanf("%lf", &y);

    if (x > 0 && y > 0) {
        printf("1\n");
    } else if (x < 0 && y > 0) {
        printf("2\n");
    } else if (x < 0 && y < 0) {
        printf("3\n");
    } else if (x > 0 && y < 0) {
        printf("4\n");
    } else {
        printf("On the coordinate axes or at the origin.\n");
    }

    return 0;
}
