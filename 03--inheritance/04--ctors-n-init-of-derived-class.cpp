#include <iostream>
#include <string>
using namespace std;


class Animal
{

    string name;
    int weight;

public:
    /**
     * TODO Task 1: Animal Ŭ������ �����ڸ� �߰��ϼ���.
     */
    Animal()
    {
        cout << "Animal constructor() " << endl;
    }

    /**
     * TODO Task 2: Animal Ŭ������ �Ҹ��ڸ� �߰��ϼ���.
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
     * TODO Task 3: Dog Ŭ������ �����ڸ� �߰��ϼ���.
     */
    Dog()
    {
        cout << "Dog constructor() " << endl;
    }

    /**
     * TODO Task 4: Dog Ŭ������ �Ҹ��ڸ� �߰��ϼ���.
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
