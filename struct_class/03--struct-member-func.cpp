#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;

    // TODO: void�� �Լ� Print�� �����Ͽ� x�� y�� ���� ����ϼ���.
    void print()
    {
        cout << "x ��ǥ�� " << x << endl;

    }
};

int main()
{
    Point point = { 1, 2 };
    point.print(); //����ü ���� point�� ��� �Լ� ȣ��

    return 0;
}
