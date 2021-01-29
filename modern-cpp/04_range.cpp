/**
 * for loop 비교
 * 1. legacy for loop
 * 2. MSVC for each
 * 3. range based for문
 */
#include <iostream>

int main()
{
    using namespace std;

    int number_list[5] = { 1, 2, 3, 4, 5 };

    cout << "legacy for loop" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    cout << "MSVC for each loop" << endl;
    for each(int i in number_list) {
        cout << i << endl;
    }

    cout << "range based for loop" << endl;
    for (auto i : number_list) {
        cout << i << endl;
    }

    return 0;
}
