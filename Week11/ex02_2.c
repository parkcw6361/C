#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    printf("1부터 %d까지의 소수: ", n);

    for(i = 2; i <= n; i++) {
        isPrime = 1;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}