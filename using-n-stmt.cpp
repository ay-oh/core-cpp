#include <iostream>

namespace a
{
    int my_variable(82);
}

namespace b
{
    int my_variable(29);
}

namespace c
{
    int my_variable(57);
}

int main()
{
    using namespace std;

    // error: 'cout' is not a namespace-name
    // using namespace cout << "lee egg" << endl;

    // error: reference to 'my_variable' is ambigous
    // using namespace a;
    // using namespace b;
    // cout << "my_variable: " << my_variable << endl;

    {
        using namespace c;
        cout << "my_variable: " << my_variable << endl;
    }

    return 0;
}
