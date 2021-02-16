#include <iostream>
using namespace std;

int main()
{
    // TODO: new 연산자를 이용해 int 형으로 배열의 개수가 4개인 동적 메모리를 가리키는 포인터 ptr2를 생성하세요.


    for (int i = 0; i < 4; i++) {
        ptr2[i] = 10 + i;
        cout << ptr2[i] << " ";
    }

    // TODO: delete 연산자를 이용하여 ptr2를 삭제하세요.


    return 0;
}
