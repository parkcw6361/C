#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45
int main(void)
{
    int i;

    srand((unsigned)time(NULL));

    for(i = 0; i < 6; i++)
        printf("%d\n", 1+rand()%MAX);

    return 0;
}