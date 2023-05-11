#include <stdio.h>

int main() {
    int n, i, is_prime = 1;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if(is_prime == 1) {
        printf("%d는 소수입니다.", n);
    } else {
        printf("%d는 소수가 아닙니다.", n);
    }

    return 0;
}