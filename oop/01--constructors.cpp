#include <iostream>
#include <string>
using namespace std;

// Student 클래스 정의
class Student
{
private:
    int    m_id;
    string m_name;
public:
    Student()
    {
        /**
         * Quest 1. 클래스의 생성자를 정의하세요.
         *  1.1 멤버 변수 m_id에 자신의 학번으로 초기화
         *  1.2 멤버 변수 m_name에 자신의 이름을 저장
         *  1.3 정상적으로 생성자가 호출되었음을 알려주는 메시지 "학생 정보가 정상 등록되었습니다." 출력
         */



    }
    void print();
};

void Student::print()
{
    cout << "학번은 " << m_id << "입니다." << "\n";
    cout << "이름은 " << m_name << "입니다." << "\n";
}

int main()
{
    /**
     * 클래스 변수 student1 선언
     * 객체 또는 instance(인스턴스)를 선언했다, 클래스를 인스턴스화했다라고도 표현
     */
    Student student1;
    student1.print();
    return 0;
}
