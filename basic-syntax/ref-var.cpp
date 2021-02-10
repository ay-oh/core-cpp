#include <iostream>

int main()
{
    using namespace std;

    // pointer
    int value = 30;
    int *ptr = nullptr;
    ptr = &value;

    // reference
    int &my_ref = value;
    cout << "ref: " << my_ref << endl;
    my_ref = 10;   // == __________
    cout << "value: " << value << ", ref: " << my_ref << endl;

    // Check address
    cout << "ptr: " << ptr << endl;
    cout << "&ptr: " << &ptr << endl;
    cout << "&value: " << &value << endl;
    cout << "&ref: " << &ref << endl;

    // int &ref; (x)
    // int &ref = literal;
    const int x = 5;
    int &ref = x;   // PS

    /**
     * swapping
     */

    return 0;
}
