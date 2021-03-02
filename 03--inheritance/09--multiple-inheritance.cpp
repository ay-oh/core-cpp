#include <iostream>


class USBDevice
{
private:
    long m_id;

public:
    USBDevice(long id) : m_id(id) {}

    long get_ID()
    {
        return m_id;
    }
};


class NetworkDevice
{
private:
    long m_id;

public:
    NetworkDevice(long id)
        : m_id(id)
    {
    }

    long get_ID()
    {
        return m_id;
    }
};


class WirelessAdapter: public USBDevice, public NetworkDevice
{
public:
    WirelessAdapter(long usbId, long networkId)
        : USBDevice(usbId), NetworkDevice(networkId)
    {
    }
};


int main()
{
    WirelessAdapter c54G(5442, 181742);

    /**
     * TODO Task 1: � get_ID �޼��尡 ȣ��Ǵ��� ���� �� ���� �����غ��� ���غ�����.
     * Answer: _______________
     */
    std::cout << c54G.getID();

    return 0;
}
