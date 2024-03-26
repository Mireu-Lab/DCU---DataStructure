#include <stdio.h>

int main() {
    int i;

    const char* ptrArray[4] = {
        {"Korea"},
        {"Seoul"},
        {"Mapo"},
        {"Tokyo"}
    };

    for (i = 0; i < 4; i+=1) {
        printf("\n%s", ptrArray[i]);
    }

    ptrArray[2] = "Jongno";
    printf("\n\n");

    for (i = 0; i < 4; i+=1) {
        printf("\n%s", ptrArray[i]);
    }

    return 0;
}