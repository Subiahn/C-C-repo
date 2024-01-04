#include <stdio.h>

int main(void) 
{
    int a = 3, b = 4 ,tmp;
    // scanf_s("%d%d", &a, &b);
    tmp = a; // 소실되기전에 백업한다.
    a = b;
    b = tmp;


    printf("a:%d, b:%d\n", a, b);
    return 0;
}