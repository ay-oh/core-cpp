#include <iostream>
using namespace std;

class Car
{
    int ton;
    int price;

public:
    static int count; // ���� ���� ����

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

    // count ���� int������ ��ȯ�ϴ� ���� �Լ� getCount()�� �ۼ��ϼ���.
    ___ getCount()
    {
        return _____count;
    }
};

int Car::count = 0; // ���� ������ �ʱ�ȭ

int main()
{
    Car car1;
    cout << "������ �ڵ����� �� : " << car1.getCount() << endl; //å�� ö�� �ٸ�
    Car car2(10, 3000);
    cout << "������ �ڵ����� �� : " << car2.getCount() << endl;
    return 0;
}
