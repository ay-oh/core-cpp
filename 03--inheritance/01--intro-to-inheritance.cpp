#include <iostream>
#include <string>
using namespace std;


class Person
{
private:
    string name;
    int age;

public:
    // 기초 클래스 생성자 정의
    Person(const string& name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void show_person()
    {
        cout << name << "의 나이는 " << age << "입니다." << endl;
    }
};


/**
 * TODO Task 1: Person 클래스를 상속받는 HealthTrainer 클래스를 작성하세요.
 *  - this를 사용하여 id(회원번호) 값을 저장하는 멤버 변수 id를 선언하세요.
 */
class HealthTrainer : public Person {};


int main()
{
    /**
     * TODO Task 1: HealthTrainer 클래스를 작성하고 주석을 해제해서 코드를 실행시켜 보세요.
     */
    //HealthTrainer HealthTrainer(1, "이효원", 30);
    //HealthTrainer.show_person();
    return 0;
}
