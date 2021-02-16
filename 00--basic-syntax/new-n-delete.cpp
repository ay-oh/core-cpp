#include <iostream>
using namespace std;

int main()
{
    // TODO: new 연산자를 이용해 int 형인 동적 메모리를 가리키는 포인터 ptr1를 생성하세요.


    *ptr1 = 20;
    cout << *ptr1 << endl;
    delete ptr1;

    return 0;
}
