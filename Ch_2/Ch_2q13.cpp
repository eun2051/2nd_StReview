#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "***** 승리장에 오신 것을 환영합니다. *****";
    int n = 0;
    while(n != 4) {
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
        cin >> n;
        //switch 문 공부 필요
        switch (n) {
            int howMany;
            case 1:
                cout << "몇인분?";
                cin >> howMany;
                cout << "짬뽕 " << howMany << "인분 나왔습니다.\n";
                break;
            case 2:
                cout << "몇인분?";
                cin >> howMany;
                cout << "짜장 " << howMany << "인분 나왔습니다.\n";
                break;
            case 3:
                cout << "몇인분?";
                cin >> howMany;
                cout << "군만두 " << howMany << "인분 나왔습니다.\n";
            case 4:
                cout << "오늘 영업은 끝났습니다.\n";
                break;
            default:
                cout << "다시 주문하세요!!.\n";
                break;
        }
    }
}

//내가 만든 코드 / 만들다가 알고리즘을 놓침
/* int main() {
    cout << "***** 승리장에 오신 것을 환영합니다. *****";
    while(true) {
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
        
    }
} */