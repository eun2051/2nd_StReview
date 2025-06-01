#include <iostream>
#include <string>
using namespace std;

class Date {
    int year, month, day;
    string date;
public:
    //생성자 - 년, 월, 일을 각각 정수로 받아 초기화
    Date(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }
    //날짜를 / 간격으로 출력
    Date(string d) { date = d; }
    void show() { cout << date << endl; }
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }
};

int main() {
    Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}

/* 내가 만든 클래스
//생성자의 잘못된 정의 -> 두 생성자 호출 모두 정의되어 있지 않아 에러
class Date {
    int year, month, date;
    char day;
public:
    Date(char d) {
        day = d;
    }
    //return 값 정의되어 잇지 않음
    char show(char d) {
        day = d;
    }
    int getYear() {
        return year;
    }
    int getMonth() {
        return month;
    }
    int getDay() {
        return date;
    }
};*/