#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/**
 * NOTE:
 *  Class: Object를 P.L.로 구현한 것
 *  Object: data와 method를 묶어 놓은 것
 *
 * @var {const string&} name
 * @var {const int&} squat
 * @var {const int&} bench_press
 * @var {const int&} deadlift
 */
class HealthTrainer
{
private:
    // 1. attributes
    string name;
    int squat;
    int bench_press;
    int deadlift;

public:
//    HealthTrainer(const string& name, const int& squat, const int& bench_press, const int& deadlift) {
//        this->name = name;
//        this->squat = squat;
//        this->bench_press = bench_press;
//        this->deadlift = deadlift;
//    }

    HealthTrainer()
        : squat(50), bench_press(50), deadlift(50), name("kid")
    {
        name = name;
        // init(50, 50, 50, "guy");
    }

    HealthTrainer(const int& input_dl, const string& input_name)
//        : squat(50), bench_press(50), deadlift(input_dl), name(input_name)
/       // Delegating ctor.
        : HealthTrainer(50, 50, input_dl, input_name)
    {
        // ctor이 ctor을 가져다 쓸 수 있음
        // init(input_dl, "guy");
    }

    HealthTrainer(const string& input_name)
        : squat(50), bench_press(50), deadlift(50), name(input_name)
    {
        cout << "delegating" << endl;
    }

    /** @method
     * @name print_SBD
     * 2. operations
     */
    void print_SBD(const HealthTrainer& ht) {}

    // data를 직접 접근 가능(no param)
    void print_SBD() {
        cout << name << " " << endl;
        cout << bench_press << " " << endl;
    }
};


class Student {};

/**
 * @function print_SBD
 *  3대 몇 드는지 출력해주는 함수
 *
 * @param {const string&} name
 * @param {const int&} squat
 * @param {const int&} bench_press
 * @param {const int&} deadlift
 *
 * @var {const float&} sbd
 */
void print_SBD(string& name, const int& squat, const int& bench_press, const int& deadlift)
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
//    const string name = "leehyowon";
//    int squat = 100;
//    int bench_press = 111;
//    int deadlift = 112;

    // Call by value vs. Call by ref. ?
    // print_SBD(name, squat, bench_press, deadlift);

    // cpy. init.
    // struct HealthTrainer ht{ 100, 100, 100 };

    // uniform init.
     struct HealthTrainer *ht = new HealthTrainer;

    // print_SBD(name, squat, bench_press, deadlift);
    // struct HealthTrainer{ 100, 100, 100 };

    // NOTE: instanciation - 실제로 메모리를 차지하도록 정의하는 것 -> instance
    // HealthTrainer ht{ "leehyowon", 100, 111, 112 };
    ht->print_SBD();


    // TODO: init. -> struct(default access spec.) -> class(..) -> access func.
    HealthTrainer ht2;
//    ht2.name = "kimkibom";

    HealthTrainer bp(0, "guy");
    HealthTrainer sq("guy2");

    return 0;
}
