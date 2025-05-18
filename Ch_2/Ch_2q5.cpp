#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "문자들을 입력하라(100개 미만.)\n";
    string str;
    getline(cin, str);
    cout << str << endl;
    int count;
    cout << "x의 개수는" << count << endl;
}
//string 안에 x의 개수를 세는 방법..
//공백을 포함하는 getline을 받는 방법
//x의 개수를 세야하므로 배열로 받아야함

/*
int main() {
    //cin.getline() 이용하기 위한 문자배열
    char str[100];
    cout << "문자들을 입력하라(100개 미만)." << endl;
    cin.getline(str, 100);

    //x 개수 세기
    int counter = 0;
    for (int i = 0; i < sizeof(str); i++) {
        if(str[i] = 'x')
            counter++;
    }

    cout << "x의 개수는 " << counter;
}
*/