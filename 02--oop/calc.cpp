// 클래스의 헤더 파일을 include
#include ________

// 이 함수가 어디서 왔는지 알 수 없기 때문에 인식이 안됨
Calc& Calc::add(int value)
{
    m_value += value;
    return *this;
}

// 컴파일러가 inline 하고 싶다고 간주합니다
Calc& Calc::sub(int value) {
    m_value -= value;
    return *this;
}

Calc& Calc::mult(int value) {
    m_value *= value;
    return *this;
}

Calc::Calc(int init_value)
    : m_value(init_value)
{}

void Calc::print()
{
    // include 하는 것들이 모두 영향을 받으므로 전역에 안쓰는 것이 좋음
    using namespace std;
    cout << "m_value: " << m_value << endl;
}
