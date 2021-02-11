#include <iostream>
#include <array>
using namespace std;

int main()
{
    /**
     * C++에서 초기화하는 방법
     *  1. 12번 - C에서 초기화했던 방법 (copy initialization)
     *  2. 13번 줄 참고 (uniform initialization)
     */
    // array<int, 100> numbers = { 0, };
    array<int, 100> numbers{ 0, };

    // 1. 입력
    int n;
    cin >> n;

    // 2. 구현
    for (int i = 0; i < n; i += 1) {
        cin >> numbers[i];
    }

    // C++는 C와 다르게 사용하기 바로 전에 변수를 선언하는 편입니다.
    int minimum = numbers.front();
    for (auto& num : numbers) {
        // 정적 배열을 사용하고 모두 0으로 초기화했으므로 탈출 조건 설정
        if (num == 0) {
            break;
        }

        if (minimum > num) {
            minimum = num;
        }
    }

    // 3. 출력
    cout << minimum;

    return 0;
}
