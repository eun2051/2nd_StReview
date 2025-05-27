//;로 5개의 이름 구분
#include <iostream>
#include <string>
using namespace std;

int main() {
    char name[100];
    int maxLength = 0;
    string maxName;

    cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>>";
    for(int i = 0; i < 5; i++) {
        //각 문자열을 입력하고 출력하기
        cin.getline(name, 100, ';');
        cout << (i + 1) << " : ";
        cout << name << "\n";

        //가장 긴 문자열 기억하기
        if (strlen(name) > maxLength) {
            maxName = name;
            maxLength = strlen(name);
        }
    }
    cout << "가장 긴 이름은 " << maxName;
}




//내가 만든 코드
/* int main() {
    string str;
    cout << "5 명의 이름을 ';'으로 구분하여 입력하세요.\n>> ";
    getline(cin, str);

}*/