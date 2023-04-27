#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void);

int main(void)
{
    int toss;
    int heads = 0;
    int tails = 0;
    srand((unsigned)time(NULL));

    for (toss = 0; toss < 100; toss++) {
        if (coin_toss() == 1)
            heads++;
        else
            tails++;
    }

    printf("동전의 앞면: %d \n", heads);
    printf("동전의 뒷면: %d \n", tails);

    return 0;
}

int coin_toss(void)
{
    int head = rand() % 2;
    return head;
}