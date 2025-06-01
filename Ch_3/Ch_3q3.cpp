#include <iostream>
using namespace std;

class Account {
    string name;
    int id, balance;
public:
    Account(string n, int i, int M) {
        name = n;
        id = i;
        balance = M;
    }
    //함수의 반환형을 int로 잡았음
    void deposit(int money) { 
        balance += money;
    }
    //함ㅅ의 반환형을 무조건 int로 하지말것
    string getOwner() {
        return name;
    }
    int inquiry() {
        return balance;
    }
    int withdraw(int tmpMoney) {
        if(balance >= tmpMoney) {
            balance -= tmpMoney;
            return tmpMoney;
        } else {
            int temp = balance;
            balance = 0;
            return temp;
        }
    }
};

int main() {
    Account a("kitae", 1, 5000); //id 1번, 잔액 5000원, 이름 kitae인 계좌 생성
	a.deposit(50000); //50000원 저금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000); //20000원 출금/withdraw()는 출금한 실제금액 리턴
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}

/*int id, firstMoney, lstMoney, tmpMoney;
    int tmpresult, result;*/