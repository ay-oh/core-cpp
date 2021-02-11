#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void input(vector<int>& numbers)
{
    int n;
    cin >> n;

    int input_data;
    for (int i = 0; i < n; i += 1) {
        cin >> input_data;
        numbers.push_back(input_data);
    }
}

int main()
{
    vector<int> numbers{};

    // 1. 입력
    input(numbers);

    // 2. 구현
    auto minimum = min_element(numbers.begin(), numbers.end());

    // 3. 출력
    cout << *minimum;

    return 0;
}
