// 수학적인 조합 값을 구하는 예제
#include <stdio.h>

// 팩토리얼 값은 반환
int factorial(int n)
{
    int i, result = 1;

    for (i = 1; i <= n; i++)
        result *= i;

    return result;
}

// 팩토리얼 값을 이용하여서 조합값을 계산
int combination(int n, int r)
{
    return (factorial(n)/(factorial(r) * factorial(n-r)));
}

// 사용자로 부터 값을 입력받아서 반환
int get_integer(void)
{
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    return n;
}

int main(void)
{
    int a, b;
    a = get_integer();
    b = get_integer();

    printf("C(%d, %d) = %d \n", a, b, combination(a, b));

    return 0;
}