#include <stdio.h>

int main() {
    int currentHour, currentMinute, cookingTime;


    scanf("%d %d", &currentHour, &currentMinute);
    scanf("%d", &cookingTime);

    int endHour = (currentHour + (currentMinute + cookingTime) / 60) % 24;
    int endMinute = (currentMinute + cookingTime) % 60;

    printf("%d %d\n", endHour, endMinute);

    return 0;
}
