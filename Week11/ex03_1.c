#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45

int main( void )
{
    int i, j, num;
    int lotto[6] = {0};
    srand( (unsigned)time(NULL) );

    for( i = 0; i < 6; i++ ) {
        num = 1 + rand() % MAX;

        // 이미 뽑은 숫자인 경우 다시 뽑기
        for( j = 0; j < i; j++ ) {
            if( lotto[j] == num ) {
                i--;
                break;
            }
        }

        // 뽑은 숫자가 중복되지 않은 경우 저장
        if( j == i ) {
            lotto[i] = num;
        }
    }

    for( i = 0; i < 6; i++ ) {
        printf("[%d]\n", lotto[i]);
    }

    return 0;
}