#include <iostream>
#include <string>
using namespace std;


class Person
{
private:
    string name;
    int age;

public:
    // ���� Ŭ���� ������ ����
    Person(const string& name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void show_person()
    {
        cout << name << "�� ���̴� " << age << "�Դϴ�." << endl;
    }
};


/**
 * TODO Task 1: Person Ŭ������ ��ӹ޴� HealthTrainer Ŭ������ �ۼ��ϼ���.
 *  - this�� ����Ͽ� id(ȸ����ȣ) ���� �����ϴ� ��� ���� id�� �����ϼ���.
 */
class HealthTrainer : public Person {};


int main()
{
    /**
     * TODO Task 1: HealthTrainer Ŭ������ �ۼ��ϰ� �ּ��� �����ؼ� �ڵ带 ������� ������.
     */
    //HealthTrainer HealthTrainer(1, "��ȿ��", 30);
    //HealthTrainer.show_person();
    return 0;
}
