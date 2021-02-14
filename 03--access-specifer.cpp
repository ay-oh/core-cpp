#include <iostream>
#include <string>
using namespace std;


class Person
{
    string name;
//1번을 해보세요!



};


class Student : Person
{
public:
    /*
    void setNamer(string name) {
    this->name = name;
    } */
//Person의 멤버인 name이 private로 설정되어 있어 Student 클래스에서 접근 불가능한 코드
    void setAddr(string addr)
    {
        this->addr = addr;
    }
    string getAddr()
    {
        return addr;
    }
};


int main()
{
    Student student1;
    student1.setAddr("서울시 관악구 호암로 546번지");
    cout << student1.getAddr() << endl;
    return 0;
}
