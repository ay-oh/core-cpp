#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
    char* name;
    int age;

public:
    Student(const char* myname, int myage)
    {
        int len = strlen(myname) + 1;
        name = new char[len];

        // strcpy_s(name, len, myname);
        // c++ 환경에서 사용하는 문자열 복사 함수
        strncpy(name, myname, len);
        age = myage;
    }

    void ShowStudentInfo()
    {
        cout << "이름: " << name << endl;
        cout<< "나이: " << age << endl;
    }

    /**
     * TODO: ~을 사용하여 destructor(소멸자)를 작성하세요.
     *  - name 매개 변수를 삭제
     *  - "Called destructor" 문장 출력
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
