#include <iostream>
#include <string>
using namespace std;

// Student Ŭ���� ����
class Student
{
private:
    int    m_id;
    string m_name;
public:
    Student()
    {
        /**
         * Quest 1. Ŭ������ �����ڸ� �����ϼ���.
         *  1.1 ��� ���� m_id�� �ڽ��� �й����� �ʱ�ȭ
         *  1.2 ��� ���� m_name�� �ڽ��� �̸��� ����
         *  1.3 ���������� �����ڰ� ȣ��Ǿ����� �˷��ִ� �޽��� "�л� ������ ���� ��ϵǾ����ϴ�." ���
         */



    }
    void print();
};

void Student::print()
{
    cout << "�й��� " << m_id << "�Դϴ�." << "\n";
    cout << "�̸��� " << m_name << "�Դϴ�." << "\n";
}

int main()
{
    /**
     * Ŭ���� ���� student1 ����
     * ��ü �Ǵ� instance(�ν��Ͻ�)�� �����ߴ�, Ŭ������ �ν��Ͻ�ȭ�ߴٶ�� ǥ��
     */
    Student student1;
    student1.print();
    return 0;
}
