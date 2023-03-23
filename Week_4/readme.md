# 4주차 C언어 실습
  - 4주차 실습
  
```c
#include <stdio.h>

int main() {
    double x, y, result;

    printf("두 개의 실수를 입력하시오:");
    scanf("%lf %lf", &x, &y);

    result = x + y;         // 덧셈 연산을 하여서 결과를 result에 대입
    printf("%f / %f = %f\n", x, y, result);

    result = x - y;
    printf("%f / %f = %f\n", x, y, result);

    result = x * y;
    printf("%f / %f = %f\n", x, y, result);

    result = x / y;
    printf("%f / %f = %f\n", x, y, result);

    return 0;
}
```
```c
#include <stdio.h>

int main() {
    char code1 = 'A';
    char code2 = 65;

    printf("code1 = %d\n", code1);
    printf("code2 = %d\n", code2+3);

    return 0;
}
```
```c
#include <stdio.h>

int main() {
    int i =10;
    printf("%d",++i);

    return 0;
}
```
