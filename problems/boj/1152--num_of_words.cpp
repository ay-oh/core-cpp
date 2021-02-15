#include <string>
#include <iostream>

/**
 * solution 함수 파라미터와 main 함수 등 여러 군데에서 사용하므로 전역 스코프 설정
 */
using namespace std;

// 함수 프로토타입 선언
int solution(string words);

int main()
{
    string words;

    getline(cin, words);
    int count = solution(words);
    cout << count;

    return 0;
}

int solution(string words)
{
    // 입력받은 문자열이 한 단어가 있다고 가정
    int count{ 1 };

    // 문자열의 길이를 2군데에서 사용하므로 변수 len에 초기화
    int len = words.length();

    // 띄어쓰기 한 개를 만나면 count를 1씩 증가
    for (int i = 0; i < len; i++) {
        if (words[i] == ' ') {
            count += 1;
        }
    }

    // 문자열의 앞에 공백이 있는 경우 count를 1 차감
    if (words[0] == ' ') {
        count -= 1;
    }

    // 문자열의 뒤에 공백이 있는 경우 count를 1 차감
    if (words[len - 1] == ' ') {
        count -= 1;
    }

    return count;
}
