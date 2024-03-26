#include <stdio.h>

int main() {
    int i, j, k;

    char student[2][3][20];

    for (i = 0; i < 2; i+=1){
        printf("\n학생 %d의 이름: ", i + 1);
        fgets(student[i][0], sizeof(student[i][0]), stdin);

        printf("\n학생 %d의 학과: ", i + 1);
        fgets(student[i][1], sizeof(student[i][1]), stdin);
        
        printf("\n학생 %d의 학번: ", i + 1);
        fgets(student[i][2], sizeof(student[i][2]), stdin);
    }
    
    for (i = 0; i < 2; i+=1){
        printf("\n\n 학생 %d", i + 1);
        for (j = 0; j < 3; j+=1) {
            printf("\n\t");
            for (k = 0; student[i][j][k]; k+=1){
                printf("%c", student[i][j][k]);
            }
        }
    }
    return 0;
}