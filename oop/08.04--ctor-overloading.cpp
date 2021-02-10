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
    /**
     * TODO: Student 클래스의 생성자를 2개 정의하세요.
     *  - 멤버 변수 m_id에 지인의 학번 저장
     *  - 멤버 변수 m_name에 지인의 이름 저장
     *  - 정상적으로 생성자가 호출되었음을 알려주는 메시지 "학생 정보가 정상 등록되었습니다." 출력
     */
    Student() {}
    Student(int, string) {}

    void print()
    {
        cout << "학번은 " << m_id << "입니다." << "\n";
        cout << "이름은 " << m_name << "입니다." << "\n";
    }
};

int main()
{
    Student student1;
    student1.print();

    /**
     * TODO: student2 객체를 생성하여 학번 201424509, “김로한”을 저장하세요.
     */


    /**
     * TODO: print() 함수를 사용해서 student2 객체의 값을 출력하세요.
     */


    return 0;
}
