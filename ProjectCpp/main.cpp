
#include "main.h"

using namespace std;

int main(void)
{
    calculate();
    return 0;
}

bool calculate()
{
    long num1 = 0;
    long num2 = 0;
    bool isFinished = false;
    char calcOperator = 0;

    try {
        printf("첫 번째 숫자 : ");
        scanf("%ld", &num1);
        rewind(stdin);
        printf("두 번째 숫자 : ");
        scanf("%ld", &num2);
        rewind(stdin);

        while (true)
        {
            printf("연산을 입력해 주세요.(+, -, *, /) : ");
            scanf("%c", &calcOperator);
            rewind(stdin);

            switch (calcOperator)
            {
            case '+':
                printf("%ld + %ld = %ld\n", num1, num2, num1 + num2);
                isFinished = true;
                break;
            case '-':
                printf("%ld - %ld = %ld\n", num1, num2, num1 - num2);
                isFinished = true;
                break;
            case '*':
                printf("%ld * %ld = %ld\n", num1, num2, num1 * num2);
                isFinished = true;
                break;
            case '/':
                if (num2 != 0)
                {
                    printf("%ld / %ld = %.10lf\n", num1, num2, double(num1) / double(num2));
                    isFinished = true;
                    break;
                }
                else
                {
                    printf("0으로 나눌 수 없습니다.\n");
                    printf("두 번째 숫자 : ");
                    scanf("%ld", &num2);
                    rewind(stdin);
                    continue;
                }
            default:
                continue;
            }

            if (isFinished == true)
            {
                compareNumbers(1, 1);
                break;
            }
        }
    }
    catch (const char *err)
    {
        printf("%s\n", err);
    }
    return true;
}

bool compareNumbers(long num1st, long num2nd)
{
    std::array<int, 5> numbers = {1, 2, 3, 4, 5};
    int sum = 0;

    std::for_each(numbers.begin(), numbers.end(), SumFunctor(sum));

    sum = 0;

    // lambda로 구현
    std::for_each(numbers.begin(), numbers.end(), [&sum](int &number)
                  { sum += number; });

    return true;
}