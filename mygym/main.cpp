#include <iostream>
//#include <string>
#include <iomanip>

using namespace std;

/**
 * @param squat
 * @param bench_press
 * @param deadlift
 */
struct HealthTrainer {
    const char* name;
    int squat;
    int bench_press;
    int deadlift;

//    void show_SBD(int squat, int bench_press, int deadlift)
//    {
//        cout << squat << " " << bench_press << " " << deadlift;
//    }
};

/**
 * @function show_SBD
 *  3대 몇 드는지 출력해주는 함수
 *
 * @param {const char*&} name
 * @param {const int&} squat
 * @param {const int&} bench_press
 * @param {const int&} deadlift
 * @param {const float&} sum
 */
void show_SBD(const char*& name, const int& squat, const int& bench_press, const int& deadlift)
{
    // cf. C Style
    // float sbd = 0.0f;

    cout << "name: " << name << endl;
    cout << "squat: " << squat << "\n";
    cout << "bench_press: " << bench_press << "\n";
    cout << "deadlift: " << deadlift << "\n";

    // C++ Style
    float sbd = 0.0f;
    sbd = (squat + bench_press + deadlift) / 3.0f;

    // TODO: 소수점 자리수 고정

    // TODO:
//    cout << fixed;
    cout << "SBD: " << setprecision(12) << sbd << "\n";
}

int main()
{
    const char* name = "leehyowon";
    int squat = 100;
    int bench_press = 111;
    int deadlift = 112;

    // Call by value
    show_SBD(name, squat, bench_press, deadlift);

//    struct HealthTrainer ht = { 100, 100, 100 };
//    ht.show_me_the_SBD();
//    struct HealthTrainer(100, 100, 100);
//    struct HealthTrainer{ 100, 100, 100 };
    return 0;
}
