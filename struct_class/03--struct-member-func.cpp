#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;

    // TODO: void형 함수 Print를 구현하여 x와 y의 값을 출력하세요.
    void print()
    {
        cout << "x 좌표는 " << x << endl;

    }
};

int main()
{
    Point point = { 1, 2 };
    point.print(); //구조체 변수 point의 멤버 함수 호출

    return 0;
}
