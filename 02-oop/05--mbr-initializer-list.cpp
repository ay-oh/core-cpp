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
     * non-static members에 대해 초기화 가능
     * Q. member 초기화 vs. 생성자 중 우선순위가 높은 것은?
     * A. ______가 우선순위가 더 높다!
     */
    int     m_i = 100;
    double  m_d = 100.0;
    char    m_c = 'F';
    int     m_trainees[5] = { 100, 200, 300, 400, 500 };
    Student m_b{ 1024 };

public:
    /**
     * uniform init.: 형 변환이 안된다. 즉, 자동 캐스팅을 안해준다. -> 좀더 엄격
     */
    HealthTrainer()
        : m_i{ 1 }, m_d{ 3.14 }, m_c{ 'a' }, m_trainees{ 1, 2, 3, 4, 5 }, m_b{ m_i - 1 }
    {
        // TODO: 우선순위 검증
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
