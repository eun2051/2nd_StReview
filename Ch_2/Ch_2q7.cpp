#include <iostream>
#include <string>
using namespace std;

int main() {
    while(true) {
        string str;
        cout << "종료하고싶으면 yes를 입력하세요>> ";
        getline(cin, str);
        if(str == "yes") {
            cout << "종료합니다...";
            break;
        }else continue;
    }
    cout << endl;
}