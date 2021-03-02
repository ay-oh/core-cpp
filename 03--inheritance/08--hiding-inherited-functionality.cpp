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
     * TODO Task 2: 자식 클래스에서 print 메서드를 접근할 수 없게 구현해보세요.
     * (error: 'void Derived::print()' is private가 나오면 제대로 구현한 것입니다.)
     */


public:
    Derived(int value)
        : Base(value)
    {}

    /**
     * TODO Task 1: using을 사용하여 m_i를 Derived 클래스 안에서 접근할 수 있도록 구현하세요.
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
