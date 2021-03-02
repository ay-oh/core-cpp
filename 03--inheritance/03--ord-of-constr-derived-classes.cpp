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

    // default param.을 해주면 이렇게 해줄 필요가 없다!
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
        // Mother()가 생략된 것!
        // TODO: 순서 바꿔서 디버깅 해보기 -> 결론: 컴파일러는 무조건 Mother Class를 초기화한다.
        : m_d(1.0), Mother(1024)
    {
        m_i = 1024;
        cout << "Child constructor is called" << endl;
    }
};


int main()
{
    /**
     * TODO Task 1: Ancestor, Mother, Child 클래스의 생성자 호출 순서를 확인하세요.
     * >>> ________ -> ________ -> ________
     */
    Child c1;

    return 0;
}
