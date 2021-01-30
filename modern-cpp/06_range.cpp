/**
 * range based for 문에서 STL 컨테이너 사용
 */
#include <iostream>

int main()
{
    using namespace std;
    cout << "range based for - vector" << endl;

    vector<int> number_list;
    number_list.push_back(1);
    number_list.push_back(2);
    number_list.push_back(3);

    for (auto i : number_list) {
        cout << i << endl;
    }

    // int
    auto number = 126;
    cout << number << endl;
}
