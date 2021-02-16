#include <iostream>
using namespace std;

class TestC
{
    int iData;

public:
    TestC()
    {
        cout << "TestC::TestC()" << endl;
    }
    ~TestC()
    {
        cout << "TestC::~TestC()" << endl;
    }
};

int main()
{
    // TODO: new연산자를 이용해 TestC 클래스의 3의 크기의 배열로 생성된 인스턴스 tc를 생성하세요.


    // TODO: delete 연산자를 이용하여 tc 배열을 삭제하세요.


    cout << "End" << endl;
    return 0;
}
