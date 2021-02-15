#include <iostream>
#include <typeinfo>
#include <iomanip>

/**
 * @see https://www.cplusplus.com/reference/typeinfo/type_info/name/
 */
int main()
{
    using namespace std;

    int x = 33;
    cout << typeid(x).name() << endl;
    int y = 33.3;

    float f = 5.5f;
    // numeric promotion
    double db = f;
    // numeric conversion
    int i = 32767;
    char c = i;

    // problem!
    cout << "static_cast<int>(c): " << static_cast<int>(c) << endl;
    c = 127;
    cout << "static_cast<int>(c): " << static_cast<int>(c) << endl;

    cout << "std::setprecision(12): " << std::setprecision(12) << f << endl;
    i = f;
    cout << "std::setprecision(12): " << std::setprecision(12) << i << endl;

    // unsigned~ high priority
    cout << "10u - 20: " << 10u - 20;

    int j = (int)3.0;   // C style
    int j = int(3.0);   // C++ style: create instance integer type
    int j = static_cast<int>(4.0);

    return 0;
}
