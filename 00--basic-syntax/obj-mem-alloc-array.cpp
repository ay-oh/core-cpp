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
    // TODO: new�����ڸ� �̿��� TestC Ŭ������ 3�� ũ���� �迭�� ������ �ν��Ͻ� tc�� �����ϼ���.


    // TODO: delete �����ڸ� �̿��Ͽ� tc �迭�� �����ϼ���.


    cout << "End" << endl;
    return 0;
}
