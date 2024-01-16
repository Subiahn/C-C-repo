#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int input = 0, i = 0;
    scanf_s("%d",&input);
    if (input < 1 || input > 9)
    {
        put("1~9 사이의 정수를 입력하세요")
        return 0;
    }

    while (i < input){
        //putchar('*');
        printf("*\t");
        ++i;
    }
    putchar('\n');
    
    return 0;
}
