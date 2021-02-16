#include <iostream>
using namespace std;

class Car
{
    int ton;
    int price;

public:
    // 정적 변수 선언
    static int count;

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

    // TODO: count 값을 int형으로 반환하는 static(정적) 함수 getCount()를 작성하세요.
    ___ getCount()
    {
        return _____count;
    }
};

// 정적 변수의 초기화
int Car::count = 0;

int main()
{
    Car car1;
    cout << "생성된 자동차의 수 : " << car1.getCount() << endl;

    Car car2(10, 3000);
    cout << "생성된 자동차의 수 : " << car2.getCount() << endl;

    return 0;
}
