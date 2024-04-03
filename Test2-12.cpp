#include <stdio.h>

struct PayInfo {
    char Name[10];
    int Year;
    int Pay;
};


int main() {
    PayInfo payData[3] = {
        {"임미르", 2023, 0001},
        {"임미르", 2024, 0001},
        {"임미르", 2021, 0001}
    };

    for (int a = 0; a < 3; a+=1) {
        printf("이름: %s\n\t입사: %d\n\t연봉: %d\n", 
                payData[a].Name, 
                payData[a].Year, 
                payData[a].Pay
            );
    }
    
    return 0;
}

