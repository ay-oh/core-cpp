#include <iostream>
#include <string>
using namespace std;


class Person
{
    string name;
//1���� �غ�����!



};


class Student : Person
{
public:
    /*
    void setNamer(string name) {
    this->name = name;
    } */
//Person�� ����� name�� private�� �����Ǿ� �־� Student Ŭ�������� ���� �Ұ����� �ڵ�
    void setAddr(string addr)
    {
        this->addr = addr;
    }
    string getAddr()
    {
        return addr;
    }
};


int main()
{
    Student student1;
    student1.setAddr("����� ���Ǳ� ȣ�Ϸ� 546����");
    cout << student1.getAddr() << endl;
    return 0;
}
