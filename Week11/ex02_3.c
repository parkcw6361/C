#include <stdio.h>

int main()
{
    int input_number;
    int i;
    int j;
    int count = 0;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &input_number);

    for(int i = 1; i <= input_number; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            if(i % j == 0)
            {
                count += 1;
            }
        }
        if(count == 2)
        {
            printf("%d\n", i);
        }
        count = 0;
    }
    printf("\n");
}