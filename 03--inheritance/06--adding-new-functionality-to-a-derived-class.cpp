#include <iostream>
using namespace std;


class Base
{

    int m_value;

public:
    Base(int value)
        : m_value(value)
    {
    }
};


class Derived : public Base
{
public:
    Derived(int value)
        : Base(value)
    {
    }

    void set_value(int value)
    {
        /**
         * error C2248: 'Base::m_value': cannot access private member declared in class 'Base'
         * TODO Task 1: ���� �ڵ带 ���� ���� ���� �����ϰ� �����غ�����.
         */
        Base::m_value = value;
    }
};


int main()
{
    return 0;
}
