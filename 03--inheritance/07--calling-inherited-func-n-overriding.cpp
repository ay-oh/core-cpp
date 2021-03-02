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
     * TODO Task 1: 자식 클래스 Student에서 print_method 함수를 재정의 하세요.
     *              ("Child Method"를 출력하는 함수입니다.)
     */

};


int main()
{
    HealthTrainer ht;
    ht.print_method();
    return 0;
}
