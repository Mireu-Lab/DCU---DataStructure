#include <stdio.h>

int factorial(int num) {
    int val;

    if (num <= 1) {
        printf("\n factorial(1) 함수 호출");
        printf("\n factorial(1) 값 1 반환");
        return 1;

    } else {
        printf("\n factorial(%d) 함수 호출", num);
        val = (num * factorial(num - 1));
        printf("\n factorial(%d) 값 %d 반환", num, val);

        return val;
    }
}

int main() {
    int num, reval;

    printf("\n\n정수를 입력하세요: ");
    scanf("%d", &num);
    reval = factorial(num);
    printf("\n\n%d의 팩토리얼 값은 %d 입니다", num, reval);

    return 0;
}
