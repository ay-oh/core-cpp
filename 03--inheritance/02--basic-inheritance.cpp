#include <iostream>
using namespace std;


class BaseData
{
// �ܺο��� ���� �Ұ���
private:
    int m_data = 0;

// �Ļ� Ŭ����(derived class)�� ���� ����
protected:
    void print_data()
    {
        cout << "BaseData::print_data()" << " ";
    }

// ������ ���� ����
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
 * TODO Task 1: BaseData Ŭ������ ��ӹ޴� DerivedData Ŭ������ �ۼ��ϼ���.
 */
class DerivedData : public BaseData {};


int main()
{
    DerivedData data;
    /**
     * TODO Task 2: data.set_data() �Լ��� 10�� �־� ȣ���ϼ���.
     */

    cout << data.get_data() << endl;

    /**
     * TODO Task 3: data.test_func() �Լ��� ȣ���ϼ���.
     */


    return 0;
}
