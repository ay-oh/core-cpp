#include "calc.h"

int main()
{
    Calc cal(10);
    cal.add(10);
    cal.sub(1);
    cal.mult(2);
    cal.print();

    Calc cal2(10);
    cal2.add(20).sub(2).mult(3).print();

    Calc cal3(30);
    Calc& temp1 = cal3.add(10);
    Calc& temp2 = temp1.sub(3);
    Calc& temp3 = temp2.mult(4);
    temp3.print();

    return 0;
}
