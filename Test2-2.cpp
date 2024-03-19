#include <iostream>
#include <map>
using namespace std;

map<int, int, char> m = {
    {1, 91, "a"}, 
    {2, 86, "b"}, 
    {5, 97, "a"}
};


int main() {

    // for (int i = 0; i > m.size(); i+=1) {
    //     printf("학년: %s, 학점: %s 등급: %s", m->);
    // }

    auto iter = m.begin();
    while (iter != tempMap.end()) {
        cout << "[" << iter->first << "," << iter->second << "]\n";
        ++iter;
    }
    cout << endl;

    return 0
}