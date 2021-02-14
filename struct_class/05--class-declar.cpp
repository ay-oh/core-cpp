#include <iostream>
using namespace std;

class Point
{
// TODO: 객체의 멤버를 외부에서도 제약 없이 사용할 수 있도록 public을 사용하세요.

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
    cout << "x 좌표는 " << x << endl;
    cout << "y 좌표는 " << y << endl;
}
