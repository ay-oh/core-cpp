#include <iostream>
using namespace std;

class Car
{
    int ton;
    int price;

public:
    // ���� ���� ����
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

    // TODO: count ���� int������ ��ȯ�ϴ� static(����) �Լ� getCount()�� �ۼ��ϼ���.
    ___ getCount()
    {
        return _____count;
    }
};

// ���� ������ �ʱ�ȭ
int Car::count = 0;

int main()
{
    Car car1;
    cout << "������ �ڵ����� �� : " << car1.getCount() << endl;

    Car car2(10, 3000);
    cout << "������ �ڵ����� �� : " << car2.getCount() << endl;

    return 0;
}
