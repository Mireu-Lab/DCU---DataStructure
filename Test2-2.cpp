#include <iostream>
#include <map>
using namespace std;

void index_program(){
    int grades[3] = {91, 86, 97};
    char rating[3] = {'a', 'b', 'a'};

    for (int i = 0; i <= 2; i+=1) {
        printf("학년: %d 학점: %d 등급: %c\n", i+1, grades[i], rating[i]);
    }

    return;
}


void format_program() {
    struct infoFormat {
        int grades;
        char rating;
    };

    struct infoFormat infoData[3] = {{91, 'a'}, {86, 'b'}, {97, 'a'}};

    for (int i = 0; i <= 2; i+=1) {
        printf("학년: %d 학점: %d 등급: %c\n", i+1, infoData[i].grades, infoData[i].rating);
    }

    return;
}

int main() {
    
    index_program();

    cout << "==================" << endl;

    format_program();

    return 0;
}