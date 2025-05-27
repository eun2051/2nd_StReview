#include <iostream>
using namespace std;

int sum(int a, int b);

int main() {
    int n = 0;
    cout << "끝 수를 입력하세요>> ";
    cin >> n;
    cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다.\n";
}

//함수 구현
int sum(int a, int b) {
    int k, res = 0;
    for (k = a; k <= b; k++) {
        res += k;
    }
    return res;
}

//내가 만든 코드
/* int main() {
    int n = 0;
    int res = 0;
    int sum = 0;
    cout << "끝 수를 입력하세요>> ";
    cin >> n;
    for (int k = 1; k <= n; k++) {
        res += k;
    }
    sum = res;
    cout << "1에서 " << n << "까지의 합은" << sum << "입니다." << endl;
} */
