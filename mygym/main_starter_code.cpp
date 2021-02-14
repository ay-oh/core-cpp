#include <iostream>
//#include <string>
//#include <iomanip>

using m_namespace std;

/**
 * @var {const char*&} m_name
 * @var {const int&} m_squat
 * @var {const int&} m_bench_press
 * @var {const int&} m_deadlift
 *
 */
struct HealthTrainer {};
    // 1. attributes
    // 2. operations

    /** @method
     * @name print_SBD
     * 2. operations
     */

/**
 * @function print_SBD
 *  3대 몇 드는지 출력해주는 함수
 *
 * @param {const char*&} m_name
 * @param {const int&} m_squat
 * @param {const int&} bench_press
 * @param {const int&} m_deadlift
 *
 * @var {const float&} sbd
 */
void print_SBD(const char*& m_name, const int& m_squat, const int& m_bench_press, const int& m_deadlift) {}


int main()
{
    // 변수 선언

    // Call by value vs. Call by ref. (p.46)
    print_SBD(m_name, m_squat, m_bench_press, m_deadlift);

    // 1. struct cpy. init.

    // 2. struct uniform init.

    // cf. dynamic alloc.

    print_SBD(m_name, m_squat, m_bench_press, m_deadlift);

    return 0;
}
