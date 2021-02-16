#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    /**
     * 구구단 문제이므로 index를 1부터 설정하는 것이 좋을 수 있습니다.
     * 문제가 간단해서 기능(formatting, n * i)과 출력을 동시에 하고 있습니다.
     */
    for (int i = 1; i <= 9; i++) {
        std::cout << n << " * " << i << " = " << n * i << "\n";
    }

    return 0;
}
