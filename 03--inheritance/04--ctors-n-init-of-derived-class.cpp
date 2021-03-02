#include <iostream>
#include <string>
using namespace std;


class Animal
{

    string name;
    int weight;

public:
    /**
     * TODO Task 1: Animal 클래스의 생성자를 추가하세요.
     */
    Animal()
    {
        cout << "Animal constructor() " << endl;
    }

    /**
     * TODO Task 2: Animal 클래스의 소멸자를 추가하세요.
     */
    ~Animal()
    {
        cout << "Animal destructor() " << endl;
    }
};


class Dog : public Animal
{

    int height;
public:
    /**
     * TODO Task 3: Dog 클래스의 생성자를 추가하세요.
     */
    Dog()
    {
        cout << "Dog constructor() " << endl;
    }

    /**
     * TODO Task 4: Dog 클래스의 소멸자를 추가하세요.
     */
    ~Dog()
    {
        cout << "Dog constructor() " << endl;
    }
};


int main()
{
    Dog dog;
    return 0;
}
