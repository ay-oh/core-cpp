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
    // TODO: new�����ڸ� �̿��� TestC Ŭ������ �ν��Ͻ� tc�� �����ϼ���.


    cout << "Test Cplus" << endl;

    // TODO: delete �����ڸ� �̿��Ͽ� tc�� �����ϼ���.


    cout << "End" << endl;

    return 0;
}
