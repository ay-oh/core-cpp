#include <iostream>
using namespace std;

class Point
{
// TODO: ��ü�� ����� �ܺο����� ���� ���� ����� �� �ֵ��� public�� ����ϼ���.

    int x;
    int y;
    void Print();
};

int main()
{
    Point point = { 1, 2 };
    point.Print();
}

void Point::Print()
{
    cout << "x ��ǥ�� " << x << endl;
    cout << "y ��ǥ�� " << y << endl;
}
