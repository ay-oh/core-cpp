#include <iostream>
#include <string>
using namespace std;

// Student 클래스 정의
class Student
{
private:
    int nHakbun;
    string sName;
public:
    Student()
    {
        nHakbun = 1234;
        sName = "이사랑";
        cout << "학번이 등록되었습니다.\n";
    }

    Student(int id, string name)
    {
        nHakbun = id;
        sName = name;
    }

    void show()
    {
        cout << "학번은 " << m_id << "입니다." << "\n";
        cout << "이름은 " << m_name << "입니다." << "\n";
    }
};

int main()
{
    Student student1;
    student1.show();

    /**
     * TODO: student2 객체를 생성해서 다음으로 초기화하세요.
     *  2.1 멤버 변수 m_id에 지인의 학번 저장
     *  2.2 멤버 변수 m_name에 지인의 이름 저장
     *  2.3 정상적으로 생성자가 호출되었음을 알려주는 메시지 "학생 정보가 정상 등록되었습니다." 출력
     */
     Student student2(5678, "마리아");

    /**
     * TODO: print() 함수를 사용해서 student2 객체의 값을 출력하세요.
     */
     student2.show();

    return 0;
}
