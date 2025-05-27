#include <iostream>
#include <string>
using namespace std;

int main() {
    //내가 생각한 알고리즘 방법
    //배열로 받아 for 문법으로 i++로 첫 index부터 출력
    string input;
    cout << "문자열 입력>> ";
    cin >> input;

    //string 객체에서 각 글자 빼오기
    for(int i = 1; i < input.length() + 1; i++) {
        for(int j = 0; j < i; j++) {
            cout << input[j];
        }
        cout << "\n";
    }
}