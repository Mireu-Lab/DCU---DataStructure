#include <stdio.h>
#include <cstdio>

int length(char str[50]) {
    int length = 0;

    for (int i = 0; str[i]; i+=1) {
        length += 1;
    }

    return length;
}

void test_to_char(char str[50], int size) {
    printf("{");
    for (int i = 0; str[i]; i+=1) {
        if (str[i] == 10) break;
        printf("%d, ", str[i]);
    }
    printf("}");
}

int main() {
    char str[50];
    fgets(str, sizeof(str), stdin);

    test_to_char(str, sizeof(str));


    printf("\n문자열 크기: ");
    printf("%d", length(str));

    return 0;
}