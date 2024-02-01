#include <stdio.h>
#include <string.h>

int main() {
    char 이름[51];
    scanf("%s", 이름);

    char 놀람[] = "??!";

    strcat(이름, 놀람);

    printf("%s\n", 이름);

    return 0;
}
