#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "두 수를 입력하시오.>>";
    cin >> a >> b;
    if (a > b) {
        cout << "더 큰 수는 " << a << "입니다." << endl;
    } else {
        cout << "더 큰 수는 " << b << "입니다." << endl;
    }
}

//위에 내가 만든 경우도 가능하지만, max라는 걸 설정하기
/*
int main() {
    cout << "두 수를 입력하시오.>>";
    int n, m;
    cin >> n >> m;

    int max;
    if (n > m) max = n;
    else max = m;

    cout << "더 큰 수 = " << max << endl;
}
*/