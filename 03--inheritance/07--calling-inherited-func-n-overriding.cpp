#include <iostream>


class Person
{
public:
    void print_method()
    {
        std::cout << "Person's Method" << std::endl;
    }
};


class HealthTrainer : public Person
{
public:
    /**
     * TODO Task 1: �ڽ� Ŭ���� Student���� print_method �Լ��� ������ �ϼ���.
     *              ("Child Method"�� ����ϴ� �Լ��Դϴ�.)
     */

};


int main()
{
    HealthTrainer ht;
    ht.print_method();
    return 0;
}
