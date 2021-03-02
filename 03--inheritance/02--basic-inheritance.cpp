#include <iostream>
using namespace std;


class BaseData
{
// 외부에서 접근 불가능
private:
    int m_data = 0;

// 파생 클래스(derived class)만 접근 가능
protected:
    void print_data()
    {
        cout << "BaseData::print_data()" << " ";
    }

// 누구나 접근 가능
public:
    BaseData()
    {
        cout << "BaseData()" << endl;
    }

    int get_data()
    {
        return m_data;
    }

    void set_data(int input_data)
    {
        m_data = input_data;
    }
};


/**
 * TODO Task 1: BaseData 클래스를 상속받는 DerivedData 클래스를 작성하세요.
 */
class DerivedData : public BaseData {};


int main()
{
    DerivedData data;
    /**
     * TODO Task 2: data.set_data() 함수에 10을 넣어 호출하세요.
     */

    cout << data.get_data() << endl;

    /**
     * TODO Task 3: data.test_func() 함수를 호출하세요.
     */


    return 0;
}
