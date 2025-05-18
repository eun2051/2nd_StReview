#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 10; i++){ //행 row
        for(int j = 0; j < 10; j++) { //열 > 한줄에 출력되는 숫자
            cout << (10 * i + j + 1) << "\t";
        }  
        cout << endl;
    }
}
//j까지 만들었지만, 100까지 출력하는데
//10 * i + j + 1 의 식을 생각 못 함
//i를 열이라고 생각함
//i j 모두 0부터 시작하므로 +1 이 필요하구나 없다면 0~99 출력이 되어버림