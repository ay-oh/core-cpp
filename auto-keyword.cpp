#include <iostream>

/**
 * trailing return types
 */
// cf. int add(int x, int y)
auto add(int x, int y) -> int;
auto add(int x, int y) -> double;

// cmp.
// int     add(int x, int y);
// double  add(int x, int y);

// auto add(double x, double y)
// {
//    return x + y;
// }

int main()
{
    auto d = 82;
    auto f = 29.0;
    auto df = 98 + 7.5;
    auto result = add(10, 20);

    return 0;
}

auto add(int x, int y) -> double
{
    return x + double(y);
}
