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
    /**
     * TODO: Student Ŭ������ �����ڸ� 2�� �����ϼ���.
     *  - ��� ���� m_id�� ������ �й� ����
     *  - ��� ���� m_name�� ������ �̸� ����
     *  - ���������� �����ڰ� ȣ��Ǿ����� �˷��ִ� �޽��� "�л� ������ ���� ��ϵǾ����ϴ�." ���
     */
    Student() {}
    Student(int, string) {}

    void print()
    {
        cout << "�й��� " << m_id << "�Դϴ�." << "\n";
        cout << "�̸��� " << m_name << "�Դϴ�." << "\n";
    }
};

int main()
{
    Student student1;
    student1.print();

    /**
     * TODO: student2 ��ü�� �����Ͽ� �й� 201424509, ������ѡ��� �����ϼ���.
     */


    /**
     * TODO: print() �Լ��� ����ؼ� student2 ��ü�� ���� ����ϼ���.
     */


    return 0;
}
