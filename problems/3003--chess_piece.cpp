#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 6> piece{ 1, 1, 2, 2, 2, 8 };
    array<int, 6> input_data;

    // 1. 입력
    for (auto& element : input_data) {
        cin >> element;
    }

    // 2. 기능 & 3. 출력
    for (auto i = 0; i < piece.size(); i += 1) {
        cout << piece[i] - input_data[i] << " ";
    }

    return 0;
}
