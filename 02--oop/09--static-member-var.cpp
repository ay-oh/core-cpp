#include <iostream>
using namespace std;

class Car
{
// TODO: default?
    int ton;
    int price;

public:
    // TODO: int�� ���� ���� count�� �����ϼ���.


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

// TODO: ::�� ����Ͽ� Car Ŭ������ �ִ� ��� ���� count�� 0���� �ʱ�ȭ �ϼ���.
// error: ��count�� in ��class Car�� does not name a type


int main()
{
    Car car1;
    cout << "������ �ڵ����� �� : " << Car::count << endl;
    Car car2(10, 3000);
    cout << "������ �ڵ����� �� : " << Car::count << endl;
    return 0;
}
