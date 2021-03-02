#include <iostream>
#include <string>
using namespace std;


class Person
{
    string name;

// TODO Task 1: 접근 지정자 protected를 사용하여 string형 변수 address을 선언하세요.


};


class HealthTrainer : Person
{
public:
    // Person 멤버 name이 private이기 때문에 HealthTrainer 클래스에서 접근 불가능한 코드
    /*void setNamer(string name)
    {
        this->name = name;
    }*/

    void set_address(string address)
    {
        this->address = address;
    }

    string get_address()
    {
        return address;
    }
};


int main()
{
    HealthTrainer ht;
    ht.set_address("부산광역시 금정구 부산대학로 63번길 2");
    cout << ht.get_address() << endl;
    return 0;
}
