#include <iostream>
using namespace std;

class Student
{
private:
    int m_age;

public:
    Student(const int& m_age_input)
        // TODO: s
        : m_age(m_age_input)
    {}
};

class HealthTrainer
{
private:
    /**
     * non-static members�� ���� �ʱ�ȭ ����
     * Q. member �ʱ�ȭ vs. ������ �� �켱������ ���� ����?
     * A. ______�� �켱������ �� ����!
     */
    int     m_i = 100;
    double  m_d = 100.0;
    char    m_c = 'F';
    int     m_trainees[5] = { 100, 200, 300, 400, 500 };
    Student m_b{ 1024 };

public:
    /**
     * uniform init.: �� ��ȯ�� �ȵȴ�. ��, �ڵ� ĳ������ �����ش�. -> ���� ����
     */
    HealthTrainer()
        : m_i{ 1 }, m_d{ 3.14 }, m_c{ 'a' }, m_trainees{ 1, 2, 3, 4, 5 }, m_b{ m_i - 1 }
    {
        // TODO: �켱���� ����
        m_i *= 2;
        m_d *= 6.28;
        m_c += 3;
    }

    void print()
    {
        cout << m_i << " " << m_d << " " << m_c << endl;
        for (auto& element : m_trainees) {
            cout << element << " ";
        }
        cout << endl;
    }
};

int main()
{
    HealthTrainer ht;
    ht.print();
    return 0;
}
