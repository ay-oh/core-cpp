#include <iostream>
using namespace std;


class Ancestor
{
public:
    Ancestor()
    {
        cout << "Ancestor constructor is called" << endl;
    }
};


class Mother : public Ancestor
{
public:
    int m_i;

    // default param.�� ���ָ� �̷��� ���� �ʿ䰡 ����!
    /*Mother()
        : m_i(0)
    {}*/

    Mother(const int& i_in = 0)
        : m_i(i_in)
    {
        cout << "Mother constructor is called" << endl;
    }
};


class Child : public Mother
{
public:
    double m_d;

public:
    Child()
        // Mother()�� ������ ��!
        // TODO: ���� �ٲ㼭 ����� �غ��� -> ���: �����Ϸ��� ������ Mother Class�� �ʱ�ȭ�Ѵ�.
        : m_d(1.0), Mother(1024)
    {
        m_i = 1024;
        cout << "Child constructor is called" << endl;
    }
};


int main()
{
    /**
     * TODO Task 1: Ancestor, Mother, Child Ŭ������ ������ ȣ�� ������ Ȯ���ϼ���.
     * >>> ________ -> ________ -> ________
     */
    Child c1;

    return 0;
}
