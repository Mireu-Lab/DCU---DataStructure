// #define _
#include <stdio.h>

int main() {

    int i = 0, n;
    int multiply[9];

    printf("\n1~9의 정수를 입력하세요 : ");

    while(true) {
        scanf("%d", &n);

        if (n < 0 ||n > 9)
            printf("\n1~9의 정수를 입력하세요 : ");
        else
            break;
    }

    printf("\n");
    
    for (i = 0; i < 9; i+=1) {
        multiply[i] = n * (i + 1);
        printf("%d * %d = %d\n", n, (i + 1), multiply[i]);
    }

    return 0;
}