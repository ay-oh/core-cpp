#include <iostream>
#include <string>
using namespace std;

// Student Ŭ���� ����
class Student
{
private:
    int nHakbun;
    string sName;
public:
    Student()
    {
        nHakbun = 1234;
        sName = "�̻��";
        cout << "�й��� ��ϵǾ����ϴ�.\n";
    }

    Student(int id, string name)
    {
        nHakbun = id;
        sName = name;
    }

    void show()
    {
        cout << "�й��� " << m_id << "�Դϴ�." << "\n";
        cout << "�̸��� " << m_name << "�Դϴ�." << "\n";
    }
};

int main()
{
    Student student1;
    student1.show();

    /**
     * TODO: student2 ��ü�� �����ؼ� �������� �ʱ�ȭ�ϼ���.
     *  2.1 ��� ���� m_id�� ������ �й� ����
     *  2.2 ��� ���� m_name�� ������ �̸� ����
     *  2.3 ���������� �����ڰ� ȣ��Ǿ����� �˷��ִ� �޽��� "�л� ������ ���� ��ϵǾ����ϴ�." ���
     */
     Student student2(5678, "������");

    /**
     * TODO: print() �Լ��� ����ؼ� student2 ��ü�� ���� ����ϼ���.
     */
     student2.show();

    return 0;
}
