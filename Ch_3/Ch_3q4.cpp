#include <iostream>
using namespace std;

class CoffeMachine {
    int coffee, water, sugar;
public:
    CoffeMachine (int c, int w, int s){
        coffee = c = 5;
        water = w = 10;
        sugar = s = 6;
    } 
    void drinkEspresso() {
        coffee -= 1;
        water -= 1;
    }
    void drinkAmericano() {
        coffee -= 1;
        water -= 2; //연산자의 문제점
    }
    void drinkSugarCoffee() {
        coffee -= 1;
        sugar -= 1;
        water -= 2;
    }
    void show() {
        cout << "커피 머신 상태, 커피:" << coffee << " 물:" << water << " 설탕:" << sugar << endl;
    }
    void fill() {
        coffee = water = sugar = 10;
    }
};

int main() {
    CoffeMachine java(5, 10, 3); //커피량:5, 물량:10, 설탕:6 초기화
	java.drinkEspresso(); //커피 1, 물 1 소비
	java.show(); //현재 커피 머신의 상태 출력
	java.drinkAmericano(); //커피 1, 물 2 소비
	java.show(); //현재 커피 머신의 상태 출력
	java.drinkSugarCoffee(); //커피 1, 물 2, 설탕 1 소비
	java.show(); //현재 커피 머신의 상태 출력
	java.fill(); //커피 10, 물 10, 설탕 10으로 채우기
	java.show(); //현재 커피 머신의 상태 출력
}

//반환형의 문제 -> 값을 반환하지 않는다면 void / 예를 들면 그냥 출력하는 애들