#include <iostream>
using namespace std;

class Student
{
private:
    int grade;
    int session;

public:
    Student()
    {
        grade = 3;
        session = 060;
    }

    void set_grade(int grade)
    {
        // TODO: this �����͸� ����Ͽ� ��� ������ �Ű� ������ �̸��� ���� grade�� ������ {}���� ä�켼��.

    }

    int get_grade()
    {
        return grade;
    }

    void set_session(int session)
    {
        // TODO: this �����͸� ����Ͽ� ��� ������ �Ű� ������ �̸��� ���� session�� ������ {}�� ä�켼��.

    }

    int get_session()
    {
        return session;
    }

    ~Student() {}
};

int main()
{
    Student student;
    cout << "�г�: " << student.get_grade() << ", �й�: " << student.get_session() << endl;

    // TODO: student ��ü�� �г��� 4�г�, �й��� 061 �й����� �ʱ�ȭ �� ����ϼ���.




    return 0;
};
