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
        // TODO: this 포인터를 사용하여 멤버 변수와 매개 변수의 이름이 같은 grade를 구분해 {}안을 채우세요.

    }

    int get_grade()
    {
        return grade;
    }

    void set_session(int session)
    {
        // TODO: this 포인터를 사용하여 멤버 변수와 매개 변수의 이름이 같은 session을 구분해 {}을 채우세요.

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
    cout << "학년: " << student.get_grade() << ", 분반: " << student.get_session() << endl;

    // TODO: student 객체에 학년은 4학년, 분반은 061 분반으로 초기화 후 출력하세요.




    return 0;
};
