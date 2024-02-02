#include <stdio.h>

int main() {
    int dice1, dice2, dice3;
    int reward = 0;

    scanf("%d %d %d", &dice1, &dice2, &dice3);


    if (dice1 == dice2 && dice2 == dice3) {
        reward = 10000 + dice1 * 1000;
    }

    else if (dice1 == dice2 || dice2 == dice3 || dice1 == dice3) {
        reward = 1000 + (dice1 == dice2 ? dice1 : (dice2 == dice3 ? dice2 : dice1)) * 100;
    }

    else {
        int maxDice = (dice1 > dice2) ? (dice1 > dice3 ? dice1 : dice3) : (dice2 > dice3 ? dice2 : dice3);
        reward = maxDice * 100;
    }


    printf("%d\n", reward);

    return 0;
}
