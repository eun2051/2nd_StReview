#include <iostream>
#include <string>
using namespace std;

int main() {
    string order;
    int num, earnMoney = 0;
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
    //switch문으로도 구현 가능
    while(earnMoney <= 20000) {
        cout << "주문>> ";
        cin >> order >> num;
        int tmpMoney;
        if (order == "에스프레소") {
            tmpMoney = 2000 * num;
        }
        else if (order == "아메리카노") {
            tmpMoney = 2300 * num;
        }
        else if (order == "카푸치노") {
            tmpMoney = 2500 * num;
        }
        earnMoney += tmpMoney;
        cout << tmpMoney << "원입니다. 맛있게 드세요.\n";
    }
    cout << "오늘" << earnMoney << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~\n";
}

/* 내가 생각한 코드 방식
int main() {
    string coffee;
    string count;
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.";
    cout << "주문>> ";
    //getline(cin, coffee, count);
    //이렇게 입력을 받을 순 없는건가?
} */