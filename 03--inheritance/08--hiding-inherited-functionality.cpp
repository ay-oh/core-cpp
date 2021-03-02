#include <iostream>
using namespace std;


class Base
{
protected:
    int m_i;

public:
    Base(int value)
        : m_i(value)
    {}

    void print()
    {
        cout << "I'm base" << endl;
    }
};


class Derived : public Base
{
private:
    double m_d;

    /**
     * TODO Task 2: �ڽ� Ŭ�������� print �޼��带 ������ �� ���� �����غ�����.
     * (error: 'void Derived::print()' is private�� ������ ����� ������ ���Դϴ�.)
     */


public:
    Derived(int value)
        : Base(value)
    {}

    /**
     * TODO Task 1: using�� ����Ͽ� m_i�� Derived Ŭ���� �ȿ��� ������ �� �ֵ��� �����ϼ���.
     */

};



int main()
{
    Base base(5);
    base.print();

    Derived derived(7);
    derived.m_i = 1024;
    derived.print();

    return 0;
}
