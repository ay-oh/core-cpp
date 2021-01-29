/**
 * auto 사용 예제 2
 * auto를 포인터, 참조, const에 사용
 */
#include <iostream>

int main()
{
    using namespace std;

    int user_mode = 2;
    auto *p_user_mode = &user_mode;
    cout << "The value of p_user_mode: " << *p_user_mode <<
            ", address: " << p_user_mode << endl;

    auto& ref_user_mode = user_mode;
    ref_user_mode = 3;
    cout << "The value of user mode: " << user_mode <<
            " | ref_user_mode: " << ref_user_mode << endl;

    return 0;
}
