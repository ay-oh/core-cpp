// Ŭ������ ��� ������ include
#include ________

// �� �Լ��� ��� �Դ��� �� �� ���� ������ �ν��� �ȵ�
Calc& Calc::add(int value)
{
    m_value += value;
    return *this;
}

// �����Ϸ��� inline �ϰ� �ʹٰ� �����մϴ�
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
    // include �ϴ� �͵��� ��� ������ �����Ƿ� ������ �Ⱦ��� ���� ����
    using namespace std;
    cout << "m_value: " << m_value << endl;
}
