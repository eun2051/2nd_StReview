//배열을 사용한다면
#include <iostream>
using namespace std;

int main() {
    //실수 입력 받으면서 크기비교
    cout << "5개의 실수를 입력하라>>";
    double num[5], max;
    cin >> num[0];
    max = num[0];
    for(int i = 1; i < 5; i++) {
        cin >> num[i];
        if(num[i] > max) max = num[i];
    }
    cout << "제일 큰 수 = " << max;
}