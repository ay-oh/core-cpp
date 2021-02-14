#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
    char* name;
    int age;

public:
    Student(const char * myname, int myage)
    {
        int len = strlen(myname) + 1;
        name=new char[len];
        //strcpy_s(name, len, myname);
        strncpy(name, myname, len); //c++ȯ�濡�� ����ϴ� ���ڿ� ���� �Լ�
        age=myage;
    }

    void ShowStudentInfo()
    {
        cout << "�̸�: " << name << endl;
        cout<< "����: " << age << endl;
    }

    /**
     * TODO: ~�� ����Ͽ� destructor(�Ҹ���)�� �ۼ��ϼ���.
     *  - name �Ű� ������ ����
     *  - "Called destructor" ���� ���
     */
    ~Student() {}




};

int main(void)
{
    Student student1("lee mee rim", 33);
    Student student2("hong gil dong", 34);
    student1.ShowStudentInfo();
    student2.ShowStudentInfo();
    return 0;
}
