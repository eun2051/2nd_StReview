#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "새 암호를 입력하세요>> ";
    string a;
    getline(cin, a);
    cout << "새 암호를 다시 한 번 입력하세요>> ";
    string b;
    getline(cin, b);
    if(a == b) cout << "같습니다";
    else cout << "틀렸습니다";
}