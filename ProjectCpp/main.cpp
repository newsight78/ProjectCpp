#include <stdio.h>

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
                break;
            }
        }
    }
    catch(const char* err) {
        printf("%s\n", err);
    }
    return 0;
}
