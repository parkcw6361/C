#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    for(i = 0; i < 6; i++)
        printf("%d", rand());
        //printf("%d", 1+(rand()%45)); -> 1부터 45 사이로 제한

    return 0;
}