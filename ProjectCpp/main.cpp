#include <stdio.h>
#include <iostream>
#include <vector>
#include "main.h"

using namespace std;

int main(void)
{
    long num1 = 0;
    long num2 = 0;
    bool isFinished = false;
    char calcOperator = 0;
    
    try {
        printf("첫 번째 숫자 : ");   scanf("%ld", &num1);    rewind(stdin);
        printf("두 번째 숫자 : ");   scanf("%ld", &num2);    rewind(stdin);
        
        while(true)
        {
            printf("연산을 입력해 주세요.(+, -, *, /) : ");  scanf("%c", &calcOperator); rewind(stdin);
            
            switch(calcOperator)
            {
                case '+' :
                    printf("%ld + %ld = %ld\n", num1, num2, num1 + num2);
                    isFinished=true;
                    break;
                case '-' :
                    printf("%ld - %ld = %ld\n", num1, num2, num1 - num2);
                    isFinished=true;
                    break;
                case '*' :
                    printf("%ld * %ld = %ld\n", num1, num2, num1 * num2);
                    isFinished=true;
                    break;
                case '/' :
                    if(num2 != 0) {
                        printf("%ld / %ld = %.10lf\n", num1, num2, double(num1) / double(num2));
                        isFinished=true;
                        break;
                    }
                    else {
                        printf("0으로 나눌 수 없습니다.\n");
                        printf("두 번째 숫자 : ");   scanf("%ld", &num2);    rewind(stdin);
                        continue;
                    }
                default:
                    continue;
            }
            
            if(isFinished == true) {
                compareNumbers(1, 1);
                break;
            }
        }
    }
    catch(const char* err) {
        printf("%s\n", err);
    }
    return 0;
}

bool compareNumbers(long num1st, long num2nd)
{
    vector<int> vt;

    auto i = "Outs";

    auto y = [](int first, int second)
    {
        return first + second;
    };

    vt.push_back(y(1, 2));
    vt.push_back(y(2, 2));
    vt.push_back(y(3, 2));
    vt.push_back(y(4, 2));

    printf("%s", i);

    if(num1st == num2nd)
    {
        return true;
    }
    return false;
}