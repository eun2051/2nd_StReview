#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i < 10; i++) {
        for(int j = 1; j < 10; j++) {
            cout << i << " * " << j << " = " << i*j << "\t";
        }
        cout << endl;
    }
}

//구구단이니까 1부터 시작을 해야함 1~9까지 출력
//시작을 0으로 한다면 0~9