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
    cout << "main begin" << endl;
    // TODO: new연산자를 이용해 TestC 클래스의 인스턴스 tc를 생성하세요.


    cout << "Test Cplus" << endl;

    // TODO: delete 연산자를 이용하여 tc를 삭제하세요.


    cout << "End" << endl;

    return 0;
}
