#include <iostream>
using namespace std;

class Car
{
// TODO: default?
    int ton;
    int price;

public:
    // TODO: int형 정적 변수 count를 선언하세요.


    Car()
    {
        ton = 0;
        price = 1000;
        count++;
    }

    Car(int ton, int price)
    {
        this->ton = ton;
        this->price = price;
        count++;
    }

    ~Car()
    {
        count--;
    }
};

// TODO: ::를 사용하여 Car 클래스의 있는 멤버 변수 count를 0으로 초기화 하세요.
// error: ‘count’ in ‘class Car’ does not name a type


int main()
{
    Car car1;
    cout << "생성된 자동차의 수 : " << Car::count << endl;
    Car car2(10, 3000);
    cout << "생성된 자동차의 수 : " << Car::count << endl;
    return 0;
}
