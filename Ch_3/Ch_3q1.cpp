#include <iostream>
using namespace std;

class Tower {
    //멤버변수를 private으로 변경해서 함수안의 매개변수로 받는 방법
    int height;
public:
    Tower() { //기본 생성자
        height = 1; // 1미터로 초기화
    }
    //매개변수 있는 생성자
    Tower(int h) {
        height = h;
    }
    int getHeight() {
        return height;
    }
};

int main() {
	Tower myTower; //1미터
	Tower seoulTower(100);
    //기본생성자, int형을 매개변수로 받는 생성자가 필요함!
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}